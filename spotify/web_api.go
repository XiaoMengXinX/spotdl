package spotify

import (
	"encoding/json"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"net/http"
)

func (d *Downloader) WebAPIGetTrackInfo(trackID string) (WebAPITrackInfo, error) {
	track, err := d.queryTrackAPI(trackID)
	if err != nil {
		return WebAPITrackInfo{}, fmt.Errorf("failed to fetch track data: %v", err)
	}
	var trackInfo WebAPITrackInfo
	trackInfo.Name = track.Name
	trackInfo.DurationMS = track.DurationMS
	trackInfo.URL = track.ExternalUrls.Spotify
	trackInfo.Artists = make([]WebAPIArtist, len(track.Artists))
	for i, artist := range track.Artists {
		trackInfo.Artists[i] = WebAPIArtist{
			Name: artist.Name,
			ID:   artist.ID,
			URL:  artist.ExternalUrls.Spotify,
		}
	}
	trackInfo.WebAPIAlbumInfo = WebAPIAlbumInfo{
		ID:      track.Album.ID,
		Name:    track.Album.Name,
		Artists: make([]WebAPIArtist, len(track.Album.Artists)),
		Images:  make([]WebAPICoverImage, len(track.Album.Images)),
		URL:     track.Album.ExternalUrls.Spotify,
	}
	for i, artist := range track.Album.Artists {
		trackInfo.WebAPIAlbumInfo.Artists[i] = WebAPIArtist{
			Name: artist.Name,
			ID:   artist.ID,
			URL:  artist.ExternalUrls.Spotify,
		}
	}
	for i, img := range track.Album.Images {
		trackInfo.WebAPIAlbumInfo.Images[i] = WebAPICoverImage{
			URL:    img.URL,
			Width:  img.Width,
			Height: img.Height,
		}
	}
	return trackInfo, nil
}

func (d *Downloader) queryAlbumTracksAPI(albumID string, offset int) (albumTracksData, error) {
	url := fmt.Sprintf("https://api.spotify.com/v1/albums/%s/tracks?offset=%d&limit=50", albumID, offset)
	data, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch album tracks failed: %v", err)
		return albumTracksData{}, err
	}

	var albumTracks albumTracksData
	if err := json.Unmarshal(data, &albumTracks); err != nil {
		return albumTracks, fmt.Errorf("failed to decode album data: %w", err)
	}
	return albumTracks, nil
}

func (d *Downloader) queryPlaylistTracksAPI(playlistID string, offset int) (playlistTracksData, error) {
	url := fmt.Sprintf("https://api.spotify.com/v1/playlists/%s/tracks?offset=%d&limit=100", playlistID, offset)
	data, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch playlist tracks failed: %v", err)
		return playlistTracksData{}, err
	}

	var playlistTracks playlistTracksData
	if err := json.Unmarshal(data, &playlistTracks); err != nil {
		return playlistTracks, fmt.Errorf("failed to decode playlist data: %w", err)
	}
	return playlistTracks, nil
}

func (d *Downloader) queryShowTracksAPI(showID string, offset int) (showTracksData, error) {
	url := fmt.Sprintf("https://api.spotify.com/v1/shows/%s/episodes?offset=%d&limit=50", showID, offset)
	data, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch show episodes failed: %v", err)
		return showTracksData{}, err
	}

	var showTracks showTracksData
	if err := json.Unmarshal(data, &showTracks); err != nil {
		return showTracks, fmt.Errorf("failed to decode show data: %w", err)
	}
	return showTracks, nil
}

func (d *Downloader) queryAlbumAPI(albumID string) (albumData, error) {
	url := fmt.Sprintf("https://api.spotify.com/v1/albums/%s", albumID)
	data, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch album failed: %v", err)
		return albumData{}, err
	}

	var album albumData
	if err := json.Unmarshal(data, &album); err != nil {
		return albumData{}, fmt.Errorf("failed to decode album data: %w", err)
	}
	return album, nil
}

func (d *Downloader) queryTrackAPI(trackID string) (trackData, error) {
	url := fmt.Sprintf("https://api.spotify.com/v1/tracks/%s", trackID)
	data, err := d.makeRequest(http.MethodGet, url, nil)
	if err != nil {
		log.Debugf("Fetch track failed: %v", err)
		return trackData{}, err
	}

	var track trackData
	if err := json.Unmarshal(data, &track); err != nil {
		return trackData{}, fmt.Errorf("failed to decode track data: %w", err)
	}
	return track, nil
}
