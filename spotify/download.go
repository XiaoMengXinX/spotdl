package spotify

import (
	"fmt"
	"github.com/XiaoMengXinX/SimpleDownloader"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/playplay"
	widevine "github.com/iyear/gowidevine"
	"os"
	"path/filepath"
)

func (d *Downloader) downloadContent(ID string, content IDType) (outFilePath string, err error) {
	var name, artist, fileID, format string
	var metadata trackMetadata

	switch content {
	case TRACK:
		name, artist, fileID, metadata, err = d.getTrackMetadata(ID)
		if err != nil {
			defer func(ID string, err *error) {
				if *err != nil {
					log.Errorln((*err).Error())
				}
			}(ID, &err)
			return outFilePath, fmt.Errorf("failed to get metadata of trackID [%s]: %v", ID, err)
		}
	case EPISODE:
		name, artist, fileID, _, err = d.getEpisodeMetadata(ID)
		if err != nil {
			defer func(ID string, err *error) {
				if *err != nil {
					log.Errorln((*err).Error())
				}
			}(ID, &err)
			return outFilePath, fmt.Errorf("failed to get metadata of episodeID [%s]: %v", ID, err)
		}
	default:
		return outFilePath, fmt.Errorf("invalid content type")
	}

	switch {
	case mp4FormatSet[d.quality]:
		format = "m4a"
	case oggFormatSet[d.quality]:
		format = "ogg"
	}

	fileName := cleanFilename(fmt.Sprintf("%s - %s", name, artist))
	outFilePath = fmt.Sprintf("%s.%s", filepath.Join(d.outputFolder, fileName), format)

	log.Infof("Downloading %s [%s]", content, fileName)

	err = d.downloadAndDecrypt(fileName, format, fileID)
	if err != nil {
		return outFilePath, err
	}

	defer func(filename string, err *error) {
		if *err != nil {
			log.Errorf("An error occurred while processing [%s]: %v", filename, (*err).Error())
		}
	}(fileName, &err)

	if hasFFmpeg {
		if d.isConvertToMP3 {
			mp3FilePath := fmt.Sprintf("%s.mp3", filepath.Join(d.outputFolder, fileName))
			err = d.convertMp3(outFilePath, mp3FilePath)
			_ = os.Remove(outFilePath)
			if err != nil {
				_ = os.Remove(mp3FilePath)
				return outFilePath, err
			}

			outFilePath = mp3FilePath
		}

		if !d.isSkipAddingMetadata && (d.isConvertToMP3 || format == "m4a") && content == TRACK {
			err = d.addMetadata(metadata, outFilePath)
			if err != nil {
				return outFilePath, err
			}
		}
	} else {
		if d.isConvertToMP3 {
			log.Warnln("ffmpeg not found, skip converting to mp3")
		}
		if !d.isSkipAddingMetadata {
			log.Warnln("ffmpeg not found, skip adding metadata")
		}
	}

	log.Infof("Download complete for %s [%s]", content, fileName)
	return
}

func (d *Downloader) downloadAndDecrypt(fileName string, format string, fileID string) (err error) {
	tmpFileName := fmt.Sprintf("%s.%s.tmp", fileName, format)
	tmpFilePath := filepath.Join(d.outputFolder, tmpFileName)
	outFilePath := fmt.Sprintf("%s.%s", filepath.Join(d.outputFolder, fileName), format)

	defer func(filename string, filePath string, err *error) {
		if *err != nil {
			_ = os.Remove(filePath)
			log.Errorf("Failed to download [%s]: %v", filename, (*err).Error())
		}
	}(fileName, outFilePath, &err)

	cdnUrl, err := d.requestCDNURL(fileID)
	if err != nil {
		return err
	}

	dl := downloader.NewDownloader().SetSavePath(d.outputFolder).SetDownloadRoutine(4)
	task, _ := dl.NewDownloadTask(cdnUrl)
	err = task.SetFileName(tmpFileName).Download()
	// err = d.downloadURL(cdnUrl, tmpFileName)
	defer os.Remove(tmpFilePath)
	if err != nil {
		return err
	}

	tmpFile, err := os.Open(tmpFilePath)
	if err != nil {
		return err
	}
	defer tmpFile.Close()

	outFile, err := os.Create(outFilePath)
	if err != nil {
		return err
	}
	defer outFile.Close()

	switch format {
	case "m4a":
		PSSH, err := requestPSSH(fileID)
		if err != nil {
			return err
		}
		log.Debugf("Request PSSH for [%s] successfully: %s", fileID, PSSH)

		keys, err := d.getMp4Keys(PSSH)
		if err != nil {
			return fmt.Errorf("get decrypt key failed: %v", err)
		}
		log.Debugf("Get decrypt key for [%s] successfully", fileID)

		err = widevine.DecryptMP4Auto(tmpFile, keys, outFile)
		if err != nil {
			return fmt.Errorf("failed to decrypt file: %v", err)
		}
	case "ogg":
		key, err := d.getOggKeys(fileID)
		if err != nil {
			return fmt.Errorf("get decrypt key failed: %v", err)
		}
		err = playplay.DecryptFileStream(key[:], tmpFile, outFile)
		if err != nil {
			return fmt.Errorf("failed to decrypt file: %v", err)
		}
	}
	return
}

func (d *Downloader) DownloadTrack(ID string) (downloadFilePath string, err error) {
	return d.downloadContent(ID, TRACK)
}

func (d *Downloader) DownloadEpisode(ID string) (downloadFilePath string, err error) {
	return d.downloadContent(ID, EPISODE)
}

func (d *Downloader) Download(url string) (err error) {
	tracks, err := d.GetTracks(url)
	if err != nil {
		return fmt.Errorf("failed to get tracks: %v", err)
	}

	if len(tracks) == 0 {
		log.Info("No tracks to download")
		return nil
	}

	log.Infof("Downloading %d track(s)", len(tracks))

	_, idType, _ := GetIDType(url)

	log.Debugf("Track type: %s", idType)

	for _, track := range tracks {
		switch idType {
		case TRACK, ALBUM, PLAYLIST:
			_, _ = d.DownloadTrack(track)
		case SHOW, EPISODE:
			_, _ = d.DownloadEpisode(track)
		}
	}
	return nil
}
