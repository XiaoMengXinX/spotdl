package spotify

import (
	"encoding/json"
	"fmt"
	"net/http"
	"strings"

	log "github.com/XiaoMengXinX/spotdl/logger"
)

func (d *Downloader) GetTrackInfo(trackID string) (WebAPITrackInfo, error) {
	gqlData, err := d.getGQLTrackMetadata(trackID)
	if err != nil {
		return WebAPITrackInfo{}, err
	}

	track := gqlData.Data.TrackUnion
	var artists []WebAPIArtist

	for _, item := range append(track.FirstArtist.Items, track.OtherArtists.Items...) {
		parts := strings.Split(item.URI, ":")
		if len(parts) < 3 {
			continue
		}
		artistID := parts[2]
		artists = append(artists, WebAPIArtist{
			Name: item.Profile.Name,
			ID:   artistID,
			URL:  "https://open.spotify.com/artist/" + artistID,
		})
	}

	var images []WebAPICoverImage
	for _, source := range track.AlbumOfTrack.CoverArt.Sources {
		images = append(images, WebAPICoverImage{
			URL:    source.URL,
			Width:  source.Width,
			Height: source.Height,
		})
	}

	albumID := ""
	if parts := strings.Split(track.AlbumOfTrack.URI, ":"); len(parts) >= 3 {
		albumID = parts[2]
	}

	return WebAPITrackInfo{
		ID:         track.ID,
		Name:       track.Name,
		URL:        "https://open.spotify.com/track/" + track.ID,
		DurationMS: track.Duration.TotalMilliseconds,
		Artists:    artists,
		Album: WebAPIAlbumInfo{
			ID:      albumID,
			Name:    track.AlbumOfTrack.Name,
			URL:     "https://open.spotify.com/album/" + albumID,
			Images:  images,
			Artists: artists,
		},
	}, nil
}

func (d *Downloader) SearchTracks(searchTerm string, limit, offset int) ([]WebAPITrackInfo, error) {
	searchResult, err := d.getGQLSearchTracks(searchTerm, limit, offset)
	if err != nil {
		return nil, err
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

func (d *Downloader) getGQLTrackMetadata(trackID string) (*getTrackData, error) {
	url := "https://api-partner.spotify.com/pathfinder/v2/query"
	params := map[string]interface{}{
		"operationName": "getTrack",
		"variables": map[string]interface{}{
			"uri": "spotify:track:" + trackID,
		},
		"extensions": map[string]interface{}{
			"persistedQuery": map[string]interface{}{
				"version":    1,
				"sha256Hash": "612585ae06ba435ad26369870deaae23b5c8800a256cd8a57e08eddc25a37294",
			},
		},
	}
	body, _ := json.Marshal(params)
	resp, err := d.makeRequest(http.MethodPost, url, body)
	if err != nil {
		return nil, err
	}

	var trackResult getTrackData
	if err := json.Unmarshal(resp, &trackResult); err != nil {
		return nil, fmt.Errorf("failed to decode GQL track result: %w", err)
	}

	return &trackResult, nil
}

func (d *Downloader) getGQLEpisodeMetadata(episodeID string) (metadata episodeMetadata, err error) {
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
		return metadata, err
	}

	if err := json.Unmarshal(resp, &metadata); err != nil {
		return metadata, fmt.Errorf("failed to decode episode metadata: %w", err)
	}

	return metadata, nil
}

func (d *Downloader) getGQLSearchTracks(searchTerm string, limit, offset int) (*searchV2Data, error) {
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

	return &searchResult, nil
}

func (d *Downloader) getTrackMetadata(trackID string) (metadata trackMetadata, err error) {
	url := fmt.Sprintf("https://spclient.wg.spotify.com/metadata/4/track/%s", SpIDToHex(trackID))
	resp, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch track metadata failed: %v", err)
		return metadata, err
	}

	if err := json.Unmarshal(resp, &metadata); err != nil {
		return metadata, fmt.Errorf("failed to decode track metadata: %w", err)
	}

	return metadata, nil
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
