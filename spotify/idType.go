package spotify

import (
	"fmt"
	"net/url"
	"strings"
)

type IDType string

const (
	TRACK    IDType = "track"
	ALBUM    IDType = "album"
	PLAYLIST IDType = "playlist"
	SHOW     IDType = "show"
	EPISODE  IDType = "episode"
)

func GetIDType(urlID string) (string, IDType, error) {
	if strings.HasPrefix(urlID, "http") {
		parsedURL, err := url.Parse(urlID)
		if err != nil {
			return "", "", err
		}

		if parsedURL.Host != "open.spotify.com" {
			return "", "", fmt.Errorf("invalid domain: %s", urlID)
		}

		pathSegments := strings.Split(parsedURL.Path, "/")
		if len(pathSegments) < 3 {
			return "", "", fmt.Errorf("invalid URL path: %s", parsedURL.Path)
		}

		return pathSegments[2], IDType(pathSegments[1]), nil
	} else if strings.HasPrefix(urlID, "spotify:") {
		split := strings.Split(urlID, ":")
		if len(split) < 3 {
			return "", "", fmt.Errorf("invalid URI format: %s", urlID)
		}
		return split[2], IDType(split[1]), nil
	}
	if urlID == "" {
		return "", "", fmt.Errorf("invalid URL or ID: %s", urlID)
	}
	return urlID, TRACK, nil
}
