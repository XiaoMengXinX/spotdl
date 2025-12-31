package spotify

import (
	"fmt"
	"net/http"
	"os"
	"path/filepath"
	"time"

	"strings"

	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/bogem/id3v2"
)

func (d *Downloader) addMetadata(trackMD trackMetadata, filePath string) (err error) {
	trackID := SpHexToID(trackMD.GID)
	log.Debugf("trackID: %s", trackMD.GID)
	log.Debugf("ID: %s", trackID)

	credits, err := d.getTrackCredits(trackID)
	if err != nil {
		log.Warnf("failed to fetch track credits: %w", err)
	}

	copyright := ""
	totalTracks := 0
	gqlMetadata, err := d.getGQLTrackMetadata(trackID)
	if err == nil {
		for _, item := range gqlMetadata.Data.TrackUnion.AlbumOfTrack.Copyright.Items {
			if item.Type == "P" {
				cr := strings.Replace(item.Text, "(P)", "℗", 1)
				if !strings.HasPrefix(cr, "℗") {
					copyright = fmt.Sprintf("℗ %s", cr)
				} else {
					copyright = cr
				}
				break
			}
		}
		if trackMD.Album.Date.Year == 0 {
			trackMD.Album.Date.Year = gqlMetadata.Data.TrackUnion.AlbumOfTrack.Date.Year
		}
		totalTracks = gqlMetadata.Data.TrackUnion.AlbumOfTrack.Tracks.TotalCount
	} else {
		log.Warnf("failed to fetch track metadata for tagging: %v", err)
	}

	metadata := make(map[string]string)
	metadata["title"] = trackMD.Name
	metadata["artist"] = formatArtistsStr(trackMD.Artists)
	metadata["album"] = trackMD.Album.Name
	metadata["date"] = trackMD.GetReleaseDate()
	metadata["album_artist"] = formatArtistsStr(trackMD.Album.Artist)
	metadata["label"] = trackMD.Album.Label
	if c := formatComposersStr(credits); c != "" {
		metadata["composer"] = c
	}
	if copyright != "" {
		metadata["copyright"] = copyright
	}
	if isrc := trackMD.GetExternalID("isrc"); isrc != "" {
		metadata["ISRC"] = isrc
	}
	if upc := trackMD.GetExternalID("upc"); upc != "" {
		metadata["UPC"] = upc
	}
	if ean := trackMD.GetExternalID("ean"); ean != "" {
		metadata["EAN"] = ean
	}
	if totalTracks > 0 {
		metadata["track"] = fmt.Sprintf("%d/%d", trackMD.Number, totalTracks)
	} else {
		metadata["track"] = fmt.Sprintf("%d", trackMD.Number)
	}

	log.Debugf("Serialized metadata: %+v", metadata)

	coverFileName, err := d.downloadCoverImage(trackMD)
	if err != nil {
		log.Warnf("Failed to download cover image: %v, skip adding front cover", err)
	}
	coverFilePath := filepath.Join(d.outputFolder, coverFileName)
	defer os.Remove(coverFilePath)

	metadata["creation_time"] = time.Now().UTC().Format(time.RFC3339)

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
