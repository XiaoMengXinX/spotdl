package token

import (
	"encoding/json"
	"fmt"
	"github.com/XiaoMengXinX/SpotDL-Go/config"
	log "github.com/XiaoMengXinX/SpotDL-Go/logger"
	"io"
	"net/http"
	"os"
	"time"
)

type Manager struct {
	TokenURL          string
	SpDc              string
	AccessToken       string
	AccessTokenExpire int64
	ConfigManager     *config.Manager
}

func NewTokenManager() *Manager {
	log.Debugln("New Token Manager Created")
	return &Manager{
		TokenURL:      "https://open.spotify.com/get_access_token",
		ConfigManager: config.NewConfigManager(),
	}
}

func (tm *Manager) QuerySpDc() {
	log.Debugln("Querying sp_dc cookie")
	conf, err := tm.ConfigManager.ReadAndGet()
	if err != nil {
		log.Warnf("Failed to read config: %v", err)
	}
	if conf.SpDc == "" {
		if tm.SpDc == "" {
			log.Warnln("sp_dc cookie not found, prompting user input")
			fmt.Print("sp_dc: ")
			_, _ = fmt.Scanln(&tm.SpDc)
			conf.SpDc = tm.SpDc
		}
		conf.SpDc = tm.SpDc
		tm.ConfigManager.Set(conf)
		log.Debugln("sp_dc cookie saved to config")
	} else {
		log.Debugln("sp_dc cookie found in config")
		tm.SpDc = conf.SpDc
	}

	tm.AccessToken, tm.AccessTokenExpire = tm.GetAccessToken()
}

func (tm *Manager) _requestAccessToken(spDc string) (string, int64, error) {
	log.Debugln("Requesting access token from Spotify")
	client := &http.Client{}

	req, err := http.NewRequest("GET", tm.TokenURL, nil)
	if err != nil {
		log.Errorf("Unable to create HTTP request: %v", err)
		return "", -1, fmt.Errorf("unable to create request: %w", err)
	}

	req.Header.Set("Cookie", fmt.Sprintf("sp_dc=%s", spDc))
	log.Debugf("Sending request to %s with sp_dc: %s", tm.TokenURL, spDc)

	resp, err := client.Do(req)
	if err != nil {
		log.Errorf("Error sending request: %v", err)
		return "", -1, fmt.Errorf("unable to send request: %w", err)
	}
	defer resp.Body.Close()

	log.Debugln("Received response with status code: %d", resp.StatusCode)

	if resp.StatusCode != http.StatusOK {
		body, _ := io.ReadAll(resp.Body)
		log.Fatalf("Failed to request token (status %d): %s", resp.StatusCode, string(body))
	}

	var tokenResponse map[string]interface{}
	if err := json.NewDecoder(resp.Body).Decode(&tokenResponse); err != nil {
		log.Errorf("Error parsing token response: %v", err)
		return "", -1, fmt.Errorf("unable to parse token response: %w", err)
	}

	log.Debugf("Token response: %+v", tokenResponse)

	if isAnonymous, ok := tokenResponse["isAnonymous"].(bool); ok && isAnonymous {
		log.Fatal("Invalid sp_dc cookie, forcing config reset")
		tm.ConfigManager.Set(config.Data{})
		os.Exit(1)
	}

	accessToken := tokenResponse["accessToken"].(string)
	expireTimestamp := int64(tokenResponse["accessTokenExpirationTimestampMs"].(float64))

	conf, _ := tm.ConfigManager.ReadAndGet()
	conf.AccessToken = accessToken
	conf.AccessTokenExpire = expireTimestamp
	tm.ConfigManager.Set(conf)

	log.Debugln("Access token successfully retrieved and saved to config")
	return accessToken, expireTimestamp, nil
}

func (tm *Manager) GetAccessToken() (string, int64) {
	log.Debugln("Checking access token")

	conf, err := tm.ConfigManager.ReadAndGet()
	if err != nil {
		log.Fatalf("Error reading config: %v", err)
	}

	currentTime := time.Now().UnixNano() / 1e6
	log.Debugf("Current time (ms): %d, Token expiration time: %d", currentTime, conf.AccessTokenExpire)

	if currentTime >= conf.AccessTokenExpire {
		log.Warnln("Access token expired, requesting new token")
		token, expire, err := tm._requestAccessToken(tm.SpDc)
		if err != nil {
			log.Fatalf("Error requesting new token: %v", err)
		}
		log.Debugln("New access token obtained")
		return token, expire
	}

	log.Debugln("Using cached access token")
	return conf.AccessToken, conf.AccessTokenExpire
}
