package spotify

import (
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/bogem/id3v2"
	"net/http"
	"os"
	"path/filepath"
	"strings"
)

func (d *Downloader) addMetadata(trackMD trackMetadata, filePath string) (err error) {
	trackID := SpHexToID(trackMD.GID)
	log.Debugf("trackID: %s", trackMD.GID)
	log.Debugf("ID: %s", SpHexToID(trackMD.GID))

	track, err := d.queryTrackAPI(trackID)
	if err != nil {
		return fmt.Errorf("failed to fetch track data: %w", err)
	}

	album, err := d.queryAlbumAPI(track.Album.ID)
	if err != nil {
		return fmt.Errorf("failed to fetch album data: %w", err)
	}

	metadata := make(map[string]string)
	metadata["title"] = trackMD.Name
	metadata["artist"] = formatArtistsStr(trackMD.Artists)
	metadata["album"] = trackMD.Album.Name
	metadata["date"] = album.ReleaseDate
	metadata["album_artist"] = formatArtistsStr(album.Artists)
	for _, copyright := range album.Copyrights {
		if copyright.Type == "P" {
			cr := strings.Replace(copyright.Text, "(P)", "℗", 1)
			if !strings.HasPrefix(cr, "℗") {
				metadata["copyright"] = fmt.Sprintf("℗ %s", cr)
			} else {
				metadata["copyright"] = cr
			}
			break
		}
	}
	metadata["label"] = album.Label
	metadata["UPC"] = track.ExternalIDs.UPC
	if album.ExternalIds.UPC != "" {
		metadata["UPC"] = album.ExternalIds.UPC
	}
	metadata["ISRC"] = track.ExternalIDs.ISRC
	if album.ExternalIds.ISRC != "" {
		metadata["ISRC"] = album.ExternalIds.ISRC
	}
	metadata["EAN"] = track.ExternalIDs.EAN
	if album.ExternalIds.EAN != "" {
		metadata["EAN"] = album.ExternalIds.EAN
	}
	metadata["track"] = fmt.Sprintf("%d/%d", track.TrackNumber, track.Album.TotalTracks)
	if len(album.Genres) > 0 {
		metadata["genre"] = album.Genres[0]
	}

	log.Debugf("Serialized metadata: %+v", metadata)

	coverFileName, err := d.downloadCoverImage(trackMD)
	coverFilePath := filepath.Join(d.outputFolder, coverFileName)
	defer os.Remove(coverFilePath)

	if err != nil {
		log.Warnf("Failed to download cover image: %v, skip adding front cover", err)
	}

	if d.isConvertToMP3 {
		return addMp3Id3v2(filePath, coverFilePath, metadata)
	} else {
		return encodeMetadata(filePath, coverFilePath, metadata)
	}
}

func addMp3Id3v2(inputFile, coverFilePath string, metadata map[string]string) (err error) {
	musicFile, err := os.OpenFile(inputFile, os.O_RDWR, os.ModePerm)
	if err != nil {
		return fmt.Errorf("failed to open input file: %v", err)
	}
	defer musicFile.Close()

	musicTag, _ := id3v2.ParseReader(musicFile, id3v2.Options{Parse: true})
	defer musicTag.Close()

	musicTag.SetDefaultEncoding(id3v2.EncodingUTF8)
	musicTag.SetTitle(metadata["title"])
	musicTag.SetArtist(metadata["artist"])
	musicTag.SetAlbum(metadata["album"])
	musicTag.SetYear(metadata["date"])

	picFile, err := os.ReadFile(coverFilePath)
	if err != nil {
		return fmt.Errorf("failed to read album pic: %v ", err)
	}
	if len(picFile) > 32 {
		mime := http.DetectContentType(picFile[:32])
		pic := id3v2.PictureFrame{
			Encoding:    id3v2.EncodingISO,
			MimeType:    mime,
			PictureType: id3v2.PTFrontCover,
			Description: "Front cover",
			Picture:     picFile,
		}
		musicTag.AddAttachedPicture(pic)
	}

	if err := musicTag.Save(); err != nil {
		return fmt.Errorf("failed to save id3v2: %v ", err)
	}
	return nil
}
