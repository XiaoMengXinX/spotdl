package spotify

import (
	"encoding/json"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"net/http"
	"strings"
)

func (d *Downloader) SearchTracks(searchTerm string, limit, offset int) ([]WebAPITrackInfo, error) {
	url := "https://api-partner.spotify.com/pathfinder/v2/query"
	paramsExtensions := map[string]interface{}{
		"persistedQuery": map[string]interface{}{
			"version":    1,
			"sha256Hash": "4801118d4a100f756e833d33984436a3899cff359c532f8fd3aaf174b60b3b49",
		},
	}
	params := map[string]interface{}{
		"operationName": "searchDesktop",
		"variables": map[string]interface{}{
			"searchTerm":                    searchTerm,
			"offset":                        offset,
			"limit":                         limit,
			"numberOfTopResults":            1,
			"includeAudiobooks":             false,
			"includeArtistHasConcertsField": false,
			"includePreReleases":            false,
			"includeLocalConcertsField":     false,
			"includeAuthors":                false,
		},
		"extensions": paramsExtensions,
	}
	body, _ := json.Marshal(params)
	resp, err := d.makeRequest(http.MethodPost, url, body)
	if err != nil {
		log.Debugf("Search tracks failed: %v", err)
		return nil, err
	}

	var searchResult searchV2Data
	if err := json.Unmarshal(resp, &searchResult); err != nil {
		return nil, fmt.Errorf("failed to decode search result: %w", err)
	}
	var trackInfos []WebAPITrackInfo
	for _, itemWrapper := range searchResult.Data.SearchV2.TracksV2.Items {
		item := itemWrapper.Item.Data
		var artists []WebAPIArtist
		for _, artist := range item.Artists.Items {
			artists = append(artists, WebAPIArtist{
				Name: artist.Profile.Name,
				ID:   strings.Split(artist.URI, ":")[2],
				URL:  "https://open.spotify.com/artist/" + strings.Split(artist.URI, ":")[2],
			})
		}
		var images []WebAPICoverImage
		for _, image := range item.AlbumOfTrack.CoverArt.Sources {
			images = append(images, WebAPICoverImage{
				URL:    image.URL,
				Width:  image.Width,
				Height: image.Height,
			})
		}
		trackInfos = append(trackInfos, WebAPITrackInfo{
			ID:         item.ID,
			Name:       item.Name,
			DurationMS: item.Duration.TotalMilliseconds,
			URL:        "https://open.spotify.com/track/" + item.ID,
			Artists:    artists,
			Album: WebAPIAlbumInfo{
				ID:      item.AlbumOfTrack.ID,
				Name:    item.AlbumOfTrack.Name,
				URL:     "https://open.spotify.com/album/" + item.AlbumOfTrack.ID,
				Images:  images,
				Artists: artists,
			},
		})
	}

	return trackInfos, nil
}

func (d *Downloader) getTrackCredits(trackID string) (credits trackCredits, err error) {
	url := fmt.Sprintf("https://spclient.wg.spotify.com/track-credits-view/v0/experimental/%s/credits", trackID)
	resp, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch track credits failed: %v", err)
		return
	}

	if err := json.Unmarshal(resp, &credits); err != nil {
		return credits, fmt.Errorf("failed to decode track credits: %w", err)
	}

	return
}

func (d *Downloader) getTrackMetadata(trackID string) (name string, artist string, fileID string, metadata trackMetadata, err error) {
	url := fmt.Sprintf("https://spclient.wg.spotify.com/metadata/4/track/%s", SpIDToHex(trackID))
	resp, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch track metadata failed: %v", err)
		return "", "", "", metadata, err
	}

	if err := json.Unmarshal(resp, &metadata); err != nil {
		return "", "", "", metadata, fmt.Errorf("failed to decode track metadata: %w", err)
	}

	if len(metadata.Artists) != 0 {
		artist = metadata.Artists[0].Name
	}

	manifest, err := d.getMediaManifest(mediaTypeTrack, trackID)
	if err != nil {
		return "", "", "", metadata, fmt.Errorf("failed to get media manifest: %w", err)
	}
	files := extractFilesFromManifest(manifest, mediaTypeTrack, trackID)
	log.Debugf("Available formats: %+v", files)

	fileID, err = d.selectFromQuality(files)
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
		log.Debugf("Fetch episode metadata failed: %v", err)
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

func (d *Downloader) getMediaManifest(mediaType, mediaID string) (*mediaManifest, error) {
	url := fmt.Sprintf("%s/track-playback/v1/media/spotify:%s:%s", d.randomClientBase(), mediaType, mediaID)
	params := map[string]interface{}{
		"manifestFileFormat": "file_ids_mp4",
	}

	fullURL := url + "?" + buildQueryParams(params)
	respBody, err := d.makeRequest(http.MethodGet, fullURL, nil)
	if err != nil {
		log.Debugf("Fetch media manifest failed: %v", err)
		return nil, err
	}

	var manifestResp mediaManifest
	if err := json.Unmarshal(respBody, &manifestResp); err != nil {
		return nil, fmt.Errorf("failed to decode media manifest: %w", err)
	}
	log.Debugf("Media manifest response: %+v", manifestResp)

	return &manifestResp, nil
}

func (d *Downloader) requestCDNURL(fileID string) (string, error) {
	url := fmt.Sprintf("%s/storage-resolve/files/audio/interactive/%s", d.randomClientBase(), fileID)
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
