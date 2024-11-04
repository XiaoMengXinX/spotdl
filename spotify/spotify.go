package spotify

import (
	"encoding/json"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/token"
	"net/http"
	"path/filepath"
)

const (
	Quality128MP4     = "MP4_128"
	Quality128MP4Dual = "MP4_128_DUAL"
	Quality256MP4     = "MP4_256"
	Quality256MP4Dual = "MP4_256_DUAL"
	Quality96Vorbis   = "OGG_VORBIS_96"
	Quality160Vorbis  = "OGG_VORBIS_160"
	Quality320Vorbis  = "OGG_VORBIS_320"
)

var (
	mp4FormatSet = map[string]bool{
		Quality128MP4:     true,
		Quality128MP4Dual: true,
		Quality256MP4:     true,
		Quality256MP4Dual: true,
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
		quality:      Quality128MP4Dual,
		outputFolder: filepath.Clean("./output"),
	}
}

func (d *Downloader) Initialize() *Downloader {
	d.TokenManager.ConfigManager.Initialize()
	d.TokenManager.QuerySpDc()
	d.clientBases = requestClientBases()
	d.licenseURL = buildLicenseURL(d.clientBases)
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

func (d *Downloader) GetTracks(url string) ([]string, error) {
	url, idType, err := GetIDType(url)
	if err != nil {
		log.Debugf("Get IDType Failed: %v", err)
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

func (d *Downloader) getTrackMetadata(trackID string) (name string, artist string, fileID string, metadata trackMetadata, err error) {
	url := fmt.Sprintf("https://spclient.wg.spotify.com/metadata/4/track/%s", SpIDToHex(trackID))
	resp, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch track metadata Failed: %v", err)
		return "", "", "", metadata, err
	}

	if err := json.Unmarshal(resp, &metadata); err != nil {
		return "", "", "", metadata, fmt.Errorf("failed to decode track metadata: %w", err)
	}

	if len(metadata.Artists) != 0 {
		artist = metadata.Artists[0].Name
	}

	log.Debugf("Available formats: %+v", getAllFiles(metadata))

	fileID, err = d.selectFromQuality(getAllFiles(metadata))
	if err != nil {
		return "", "", "", metadata, err
	}

	return metadata.Name, artist, fileID, metadata, nil
}

func (d *Downloader) getEpisodeMetadata(episodeID string) (name string, creator string, fileID string, metadata episodeMetadata, err error) {
	url := "https://api-partner.spotify.com/pathfinder/v1/query"
	var paramsVar []byte
	paramsVar, _ = json.Marshal(map[string]string{
		"uri": fmt.Sprintf("spotify:episode:%s", episodeID),
	})
	var paramsExtensions []byte
	paramsExtensions, _ = json.Marshal(map[string]interface{}{
		"persistedQuery": map[string]interface{}{
			"version":    1,
			"sha256Hash": "9697538fe993af785c10725a40bb9265a20b998ccd2383bd6f586e01303824e9",
		},
	})
	params := map[string]interface{}{
		"operationName": "getEpisodeOrChapter",
		"variables":     string(paramsVar),
		"extensions":    string(paramsExtensions),
	}
	resp, err := d.makeRequest(http.MethodGet, url+"?"+buildQueryParams(params), nil)
	if err != nil {
		log.Debugf("Fetch episode metadata Failed: %v", err)
		return "", "", "", metadata, err
	}

	if err := json.Unmarshal(resp, &metadata); err != nil {
		return "", "", "", metadata, fmt.Errorf("failed to decode episode metadata: %w", err)
	}

	episode := metadata.Data.Episode
	fileID, err = d.selectFromQuality(episode.Audio.Items)
	if err != nil {
		return "", "", "", metadata, err
	}

	if episode.Creator == "" {
		episode.Creator = episode.Podcast.Data.Name
	}

	return episode.Name, episode.Creator, fileID, metadata, err
}

func (d *Downloader) requestCDNURL(fileID string) (string, error) {
	url := fmt.Sprintf("https://gew4-spclient.spotify.com/storage-resolve/files/audio/interactive/%s", fileID)
	params := buildQueryParams(map[string]interface{}{"alt": "json"})

	respBody, err := d.makeRequest(http.MethodGet, url+"?"+params, nil)
	if err != nil {
		log.Debugf("Fetch CDN URL Failed: %v", err)
		return "", err
	}

	var cdnResponse cdnURL
	_ = json.Unmarshal(respBody, &cdnResponse)

	if len(cdnResponse.CdnURL) == 0 {
		return "", fmt.Errorf("no CDN URL found in response")
	}
	log.Debugf("Get CDN URL successfully: %v", cdnResponse.CdnURL)

	return cdnResponse.CdnURL[0], nil
}
