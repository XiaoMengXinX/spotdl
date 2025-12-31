package spotify

import (
	"fmt"
	"path/filepath"

	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/token"
)

const (
	mediaTypeTrack = "track"
)

const (
	Quality128MP4    = "MP4_128"
	Quality256MP4    = "MP4_256"
	Quality96Vorbis  = "OGG_VORBIS_96"
	Quality160Vorbis = "OGG_VORBIS_160"
	Quality320Vorbis = "OGG_VORBIS_320"
)

var (
	mp4FormatSet = map[string]bool{
		Quality128MP4: true,
		Quality256MP4: true,
	}

	oggFormatSet = map[string]bool{
		Quality96Vorbis:  true,
		Quality160Vorbis: true,
		Quality320Vorbis: true,
	}
)

type Downloader struct {
	TokenManager *token.Manager

	outputFolder string
	quality      string
	clientBases  []string
	licenseURL   string

	isConvertToMP3       bool
	isSkipAddingMetadata bool
}

func NewDownloader() *Downloader {
	return &Downloader{
		TokenManager: token.NewTokenManager(),
		quality:      Quality128MP4,
		outputFolder: filepath.Clean("./output"),
	}
}

func (d *Downloader) Initialize() *Downloader {
	d.TokenManager.ConfigManager.Initialize()
	d.TokenManager.QuerySpDc()
	d.clientBases = requestClientBases()
	d.licenseURL = d.buildLicenseURL()
	_ = readCDMs()
	if err := checkDirExist(d.outputFolder); err != nil {
		log.Fatalln(err)
	}
	return d
}

func (d *Downloader) SetQuality(quality string) error {
	if mp4FormatSet[quality] != true && oggFormatSet[quality] != true {
		return fmt.Errorf("%s is not a valid quality format", quality)
	}
	d.quality = quality
	return nil
}

func (d *Downloader) SetOutputPath(outputPath string) *Downloader {
	d.outputFolder = filepath.Clean(outputPath)
	return nil
}

func (d *Downloader) ConvertToMP3(b bool) *Downloader {
	d.isConvertToMP3 = b
	return d
}

func (d *Downloader) SkipAddingMetadata(b bool) *Downloader {
	d.isSkipAddingMetadata = b
	return d
}

func (d *Downloader) GetTrackIDs(url string) ([]string, error) {
	url, idType, err := GetIDType(url)
	if err != nil {
		log.Debugf("Get IDType failed: %v", err)
		return nil, err
	}
	switch idType {
	case ALBUM:
		return d.fetchAlbumTracks(url, 0, []string{})
	case PLAYLIST:
		return d.fetchPlaylistTracks(url, 0, []string{})
	case SHOW:
		return d.fetchShowEpisodes(url, 0, []string{})
	default:
		return []string{url}, nil
	}
}

func (d *Downloader) fetchAlbumTracks(albumID string, offset int, tracks []string) ([]string, error) {
	albumData, err := d.queryAlbumTracksAPI(albumID, offset)
	if err != nil {
		return nil, err
	}

	for _, item := range albumData.Items {
		tracks = append(tracks, item.Id)
	}

	if len(albumData.Items) >= 50 {
		return d.fetchAlbumTracks(albumID, offset+50, tracks)
	}
	return tracks, nil
}

func (d *Downloader) fetchPlaylistTracks(playlistID string, offset int, tracks []string) ([]string, error) {
	playlistData, err := d.queryPlaylistTracksAPI(playlistID, offset)
	if err != nil {
		return nil, err
	}

	for _, item := range playlistData.Items {
		if item.Track.Id != "" {
			tracks = append(tracks, item.Track.Id)
		}
	}

	if len(playlistData.Items) >= 100 {
		return d.fetchPlaylistTracks(playlistID, offset+100, tracks)
	}
	return tracks, nil
}

func (d *Downloader) fetchShowEpisodes(showID string, offset int, episodes []string) ([]string, error) {
	showData, err := d.queryShowTracksAPI(showID, offset)
	if err != nil {
		return nil, err
	}

	for _, item := range showData.Items {
		episodes = append(episodes, item.Id)
	}

	if len(showData.Items) >= 50 {
		return d.fetchShowEpisodes(showID, offset+50, episodes)
	}
	return episodes, nil
}
