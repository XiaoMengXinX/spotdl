package spotify

import (
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"sort"
)

func (d *Downloader) downloadCoverImage(metadata trackMetadata) (fileName string, err error) {
	fileId, err := getLargestCover(metadata)
	if err != nil {
		return fileName, fmt.Errorf("failed to get cover: %v", err)
	}

	url := fmt.Sprintf("https://i.scdn.co/image/%s", fileId)
	fileName = fmt.Sprintf("%s.jpg", fileId)

	if err = d.downloadURL(url, fileName); err != nil {
		return
	}
	return
}

func getLargestCover(metadata trackMetadata) (string, error) {
	if len(metadata.Album.CoverGroup.Image) == 0 {
		return "", fmt.Errorf("no cover images available")
	}
	log.Debugf("Cover image: %+v", metadata.Album.CoverGroup.Image)

	sort.Slice(metadata.Album.CoverGroup.Image, func(i, j int) bool {
		return metadata.Album.CoverGroup.Image[i].Width*metadata.Album.CoverGroup.Image[i].Height >
			metadata.Album.CoverGroup.Image[j].Width*metadata.Album.CoverGroup.Image[j].Height
	})

	return metadata.Album.CoverGroup.Image[0].FileId, nil
}
