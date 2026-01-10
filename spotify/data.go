package spotify

import "fmt"

type WebAPITrackInfo struct {
	ID         string
	Name       string
	URL        string
	DurationMS int
	Album      WebAPIAlbumInfo
	Artists    []WebAPIArtist
}

type WebAPIAlbumInfo struct {
	ID      string
	Images  []WebAPICoverImage
	Name    string
	Artists []WebAPIArtist
	URL     string
}

type WebAPICoverImage struct {
	URL    string
	Width  int
	Height int
}

type WebAPIArtist struct {
	Name string
	ID   string
	URL  string
}

type albumTracksData struct {
	Items []struct {
		Id string `json:"id"`
	} `json:"items"`
	Total  int    `json:"total"`
	Offset int    `json:"offset"`
	Next   string `json:"next"`
}

type playlistTracksData struct {
	Items []struct {
		Track struct {
			Id string `json:"id"`
		} `json:"track"`
	} `json:"items"`
	Total  int    `json:"total"`
	Offset int    `json:"offset"`
	Next   string `json:"next"`
}

type showTracksData struct {
	Items []struct {
		Id string `json:"id"`
	} `json:"items"`
	Total  int    `json:"total"`
	Offset int    `json:"offset"`
	Next   string `json:"next"`
}

type albumData struct {
	ExternalUrls struct {
		Spotify string `json:"spotify"`
	} `json:"external_urls"`
	Type                 string           `json:"album_type"`
	TotalTracks          int              `json:"total_tracks"`
	ID                   string           `json:"id"`
	Name                 string           `json:"name"`
	ReleaseDate          string           `json:"release_date"`
	ReleaseDatePrecision string           `json:"release_date_precision"`
	Artists              []artistData     `json:"artists"`
	Images               []albumImageData `json:"images"`
	Copyrights           []struct {
		Text string `json:"text"`
		Type string `json:"type"`
	} `json:"copyrights"`
	ExternalIds struct {
		ISRC string `json:"isrc"`
		EAN  string `json:"ean"`
		UPC  string `json:"upc"`
	} `json:"external_ids"`
	Genres []string `json:"genres"`
	Label  string   `json:"label"`
}

type trackData struct {
	ID           string `json:"id"`
	ExternalUrls struct {
		Spotify string `json:"spotify"`
	} `json:"external_urls"`
	Album       albumData    `json:"album"`
	Artists     []artistData `json:"artists"`
	DurationMS  int          `json:"duration_ms"`
	ExternalIDs struct {
		ISRC string `json:"isrc"`
		EAN  string `json:"ean"`
		UPC  string `json:"upc"`
	} `json:"external_ids"`
	Name        string `json:"name"`
	TrackNumber int    `json:"track_number"`
}

type trackCredits struct {
	TrackTitle  string `json:"trackTitle"`
	RoleCredits []struct {
		RoleTitle string       `json:"roleTitle"`
		Artists   []artistData `json:"artists"`
	} `json:"roleCredits"`
	SourceNames []string `json:"sourceNames"`
}

type trackMetadata struct {
	GID   string `json:"gid"`
	Name  string `json:"name"`
	Album struct {
		GID    string       `json:"gid"`
		Name   string       `json:"name"`
		Artist []artistData `json:"artist"`
		Label  string       `json:"label"`
		Date   struct {
			Year  int `json:"year"`
			Month int `json:"month"`
			Day   int `json:"day"`
		} `json:"date"`
		CoverGroup struct {
			Image []albumImageData `json:"image"`
		} `json:"cover_group"`
	} `json:"album"`
	Artists    []artistData `json:"artist"`
	Number     int          `json:"number"`
	Duration   int          `json:"duration"`
	ExternalID []struct {
		Type string `json:"type"`
		ID   string `json:"id"`
	} `json:"external_id"`
	File    []fileEntry `json:"file"`
	AltFile []struct {
		File []fileEntry `json:"file"`
	} `json:"alternative,omitempty"`
}

func (m trackMetadata) GetExternalID(idType string) string {
	for _, id := range m.ExternalID {
		if id.Type == idType {
			return id.ID
		}
	}
	return ""
}

func (m trackMetadata) GetReleaseDate() string {
	date := m.Album.Date
	if date.Year == 0 {
		return ""
	}
	if date.Month == 0 {
		return fmt.Sprintf("%d", date.Year)
	}
	if date.Day == 0 {
		return fmt.Sprintf("%d-%02d", date.Year, date.Month)
	}
	return fmt.Sprintf("%d-%02d-%02d", date.Year, date.Month, date.Day)
}

type episodeMetadata struct {
	Data struct {
		Episode struct {
			Name    string `json:"name"`
			Creator string `json:"creator"`
			Audio   struct {
				Items []fileEntry `json:"items"`
			} `json:"audio"`
			Podcast struct {
				Data struct {
					Name string `json:"name"`
				} `json:"data"`
			} `json:"podcastV2"`
		} `json:"episodeUnionV2"`
	} `json:"data"`
}

type mediaManifest struct {
	Media map[string]struct {
		Item struct {
			Metadata struct {
				Uri           string `json:"uri"`
				LinkedFromUri string `json:"linked_from_uri"`
			} `json:"metadata"`
			Manifest struct {
				FileIdsMp4 []struct {
					Bitrate int     `json:"bitrate"`
					FileID  string  `json:"file_id"`
					FileURL *string `json:"file_url"`
				} `json:"file_ids_mp4"`
			} `json:"manifest"`
		} `json:"item"`
	} `json:"media"`
}

type getTrackData struct {
	Data struct {
		TrackUnion struct {
			Typename string `json:"__typename"`
			Duration struct {
				TotalMilliseconds int `json:"totalMilliseconds"`
			} `json:"duration"`
			ID          string `json:"id"`
			Name        string `json:"name"`
			TrackNumber int    `json:"trackNumber"`
			URI         string `json:"uri"`
			FirstArtist struct {
				Items []struct {
					ID      string `json:"id"`
					URI     string `json:"uri"`
					Profile struct {
						Name string `json:"name"`
					} `json:"profile"`
				} `json:"items"`
				TotalCount int `json:"totalCount"`
			} `json:"firstArtist"`
			OtherArtists struct {
				Items []struct {
					ID      string `json:"id"`
					URI     string `json:"uri"`
					Profile struct {
						Name string `json:"name"`
					} `json:"profile"`
				} `json:"items"`
			} `json:"otherArtists"`
			AlbumOfTrack struct {
				Copyright struct {
					Items []struct {
						Text string `json:"text"`
						Type string `json:"type"`
					} `json:"items"`
				} `json:"copyright"`
				Date struct {
					IsoString string `json:"isoString"`
					Precision string `json:"precision"`
					Year      int    `json:"year"`
				} `json:"date"`
				Name   string `json:"name"`
				URI    string `json:"uri"`
				Tracks struct {
					TotalCount int `json:"totalCount"`
				} `json:"tracks"`
				CoverArt struct {
					Sources []albumImageData `json:"sources"`
				} `json:"coverArt"`
			} `json:"albumOfTrack"`
		} `json:"trackUnion"`
	} `json:"data"`
}

type artistData struct {
	ExternalUrls struct {
		Spotify string `json:"spotify"`
	} `json:"external_urls"`
	SubRoles []string `json:"subroles"`
	Name     string   `json:"name"`
	ID       string   `json:"id"`
	GID      string   `json:"gid"`
}

type albumImageData struct {
	FileId string `json:"file_id"`
	URL    string `json:"url"`
	Size   string `json:"size"`
	Width  int    `json:"width"`
	Height int    `json:"height"`
}

type cdnURL struct {
	Result string   `json:"result"`
	CdnURL []string `json:"cdnurl"`
	Fileid string   `json:"fileid"`
	TTL    int      `json:"ttl"`
}

type fileEntry struct {
	Format string `json:"format"`
	FileID string `json:"file_id,omitempty"`
	FileId string `json:"fileId,omitempty"`
}

type searchV2Data struct {
	Data struct {
		SearchV2 struct {
			TracksV2 struct {
				Items []struct {
					Item struct {
						Data searchTracksItem `json:"data"`
					} `json:"item"`
				} `json:"items"`
			} `json:"tracksV2"`
		} `json:"searchV2"`
	} `json:"data"`
}

type searchTracksItem struct {
	ID           string `json:"id"`
	Name         string `json:"name"`
	AlbumOfTrack struct {
		CoverArt struct {
			Sources []albumImageData `json:"sources"`
		} `json:"coverArt"`
		ID   string `json:"id"`
		Name string `json:"name"`
		URI  string `json:"uri"`
	} `json:"albumOfTrack"`
	Artists struct {
		Items []struct {
			Profile struct {
				Name string `json:"name"`
			} `json:"profile"`
			URI string `json:"uri"`
		} `json:"items"`
	} `json:"artists"`
	Duration struct {
		TotalMilliseconds int `json:"totalMilliseconds"`
	} `json:"duration"`
	URI string `json:"uri"`
}
