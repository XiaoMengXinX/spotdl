package token

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"net/http"
	"net/url"
	"time"

	"github.com/XiaoMengXinX/spotdl/config"
	"github.com/XiaoMengXinX/spotdl/injector"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/pquerna/otp/totp"
)

const (
	UserAgent     = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36"
	ClientVersion = "1.2.70.61.g856ccd63"
)

var defaultHeaders = http.Header{
	"User-Agent":          []string{UserAgent},
	"Accept":              []string{"application/json"},
	"Content-Type":        []string{"application/json"},
	"origin":              []string{"https://open.spotify.com/"},
	"app-platform":        []string{"WebPlayer"},
	"sec-ch-ua-platform":  []string{"macOS"},
	"spotify-app-version": []string{ClientVersion},
}

type Manager struct {
	SessionTokenURL   string
	ClientTokenURL    string
	SpDc              string
	AccessToken       string
	ClientToken       string
	ClientId          string
	AccessTokenExpire int64
	ConfigManager     *config.Manager
}

type accessTokenData struct {
	ClientId    string `json:"clientId"`
	AccessToken string `json:"accessToken"`
	ExpireTime  int64  `json:"accessTokenExpirationTimestampMs"`
	IsAnonymous bool   `json:"isAnonymous"`
}

type clientTokenData struct {
	ResponseType string `json:"response_type"`
	GrantedToken struct {
		Token               string `json:"token"`
		ExpiresAfterSeconds int    `json:"expires_after_seconds"`
		RefreshAfterSeconds int    `json:"refresh_after_seconds"`
		Domains             []struct {
			Domain string `json:"domain"`
		} `json:"domains"`
	} `json:"granted_token"`
}

type clientTokenRequest struct {
	ClientData struct {
		ClientVersion string      `json:"client_version"`
		ClientId      string      `json:"client_id"`
		JsSdkData     interface{} `json:"js_sdk_data"`
	} `json:"client_data"`
}

func NewTokenManager() *Manager {
	log.Debugln("New Token Manager Created")
	return &Manager{
		SessionTokenURL: "https://open.spotify.com/api/token",
		ClientTokenURL:  "https://clienttoken.spotify.com/v1/clienttoken",
		ConfigManager:   config.NewConfigManager(),
	}
}

func (tm *Manager) NewRequest(method, url string, body io.Reader) (*http.Request, error) {
	req, err := http.NewRequest(method, url, body)
	if err != nil {
		return nil, err
	}
	req.Header = defaultHeaders.Clone()
	currentTime := time.Now().UnixNano() / 1e6
	if tm.ClientToken != "" && currentTime < tm.AccessTokenExpire {
		req.Header.Set("client-token", tm.ClientToken)
	}
	if tm.SpDc != "" {
		req.Header.Set("Cookie", fmt.Sprintf("sp_dc=%s", tm.SpDc))
	}
	return req, nil
}

func (tm *Manager) QuerySpDc() {
	log.Debugln("Querying sp_dc cookie")
	conf, err := tm.ConfigManager.ReadAndGet()
	if err != nil {
		log.Errorf("Failed to read config: %v", err)
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

func (tm *Manager) requestAccessToken() (string, int64, error) {
	log.Debugln("Requesting access token from Spotify")
	client := &http.Client{}

	totpStr, totpTime, err := tm.getTotp()
	if err != nil {
		return "", -1, fmt.Errorf("failed to get totp: %w", err)
	}
	timeStr := fmt.Sprint(totpTime.Unix())

	reqUrl := tm.SessionTokenURL + "?" + url.Values{
		"reason":      {"transport"},
		"productType": {"web-player"},
		"totp":        {totpStr},
		"totpServer":  {totpStr},
		"totpVer":     {fmt.Sprintf("%d", tm.ConfigManager.Get().TOTP.Version)},
		"sTime":       {timeStr},
		"cTime":       {timeStr + "420"},
	}.Encode()

	req, err := tm.NewRequest("GET", reqUrl, nil)
	if err != nil {
		return "", -1, fmt.Errorf("failed to create request: %w", err)
	}

	log.Debugf("Requesting new access token with sp_dc: %s", tm.SpDc)
	log.Debugf("[GET] %s", reqUrl)

	resp, err := client.Do(req)
	if err != nil {
		return "", -1, fmt.Errorf("failed to send request: %w", err)
	}
	defer resp.Body.Close()

	log.Debugf("Received response with status code: %d", resp.StatusCode)

	if resp.StatusCode != http.StatusOK {
		body, _ := io.ReadAll(resp.Body)
		log.Debugf("Failed to request token (status %d): %s", resp.StatusCode, string(body))
		return "", -1, fmt.Errorf("failed to make request: HTTP status code %d", resp.StatusCode)
	}

	var tokenResp accessTokenData
	if err := json.NewDecoder(resp.Body).Decode(&tokenResp); err != nil {
		return "", -1, fmt.Errorf("failed to parse token response: %v", err)
	}

	log.Debugf("Token response: %+v", tokenResp)

	if tokenResp.IsAnonymous {
		tm.ConfigManager.Set(config.Data{
			DefaultQuality:    tm.ConfigManager.Get().DefaultQuality,
			SpDc:              "",
			AccessToken:       "",
			AccessTokenExpire: 0,
			AcceptLanguage:    tm.ConfigManager.Get().AcceptLanguage,
		})
		log.Fatal("Invalid sp_dc cookie")
	}

	tm.ClientId = tokenResp.ClientId
	conf, _ := tm.ConfigManager.ReadAndGet()
	conf.AccessToken = tokenResp.AccessToken
	conf.AccessTokenExpire = tokenResp.ExpireTime
	tm.ConfigManager.Set(conf)

	log.Debugln("Access token successfully retrieved and saved to config")
	return tokenResp.AccessToken, tokenResp.ExpireTime, nil
}

func (tm *Manager) requestClientToken(clientId string) (string, error) {
	log.Debugln("Requesting client token from Spotify")
	client := &http.Client{}

	reqBody := clientTokenRequest{}
	reqBody.ClientData.ClientVersion = ClientVersion
	reqBody.ClientData.ClientId = clientId
	reqBody.ClientData.JsSdkData = make(map[string]interface{})
	jsonData, _ := json.Marshal(reqBody)
	log.Debugf("Client token request body: %s", string(jsonData))
	req, err := tm.NewRequest("POST", tm.ClientTokenURL, bytes.NewBuffer(jsonData))
	if err != nil {
		return "", fmt.Errorf("failed to create request: %w", err)
	}

	log.Debugf("[POST] %s", tm.ClientTokenURL)

	resp, err := client.Do(req)
	if err != nil {
		return "", fmt.Errorf("failed to send request: %w", err)
	}
	defer resp.Body.Close()
	log.Debugf("Received response with status code: %d", resp.StatusCode)

	if resp.StatusCode != http.StatusOK {
		body, _ := io.ReadAll(resp.Body)
		log.Debugf("Failed to request client token (status %d): %s", resp.StatusCode, string(body))
		return "", fmt.Errorf("failed to make request: HTTP status code %d", resp.StatusCode)
	}
	body, _ := io.ReadAll(resp.Body)
	fmt.Println(string(body))

	var tokenResp clientTokenData
	if err := json.NewDecoder(resp.Body).Decode(&tokenResp); err != nil {
		return "", fmt.Errorf("failed to parse client token response: %v", err)
	}
	log.Debugf("Client token response: %+v", tokenResp)
	if tokenResp.GrantedToken.Token == "" {
		return "", fmt.Errorf("failed to retrieve granted token")
	}

	log.Debugln("Client token successfully retrieved")
	return tokenResp.GrantedToken.Token, nil
}

func (tm *Manager) GetAccessToken() (string, int64) {
	log.Debugln("Checking access token")

	conf, err := tm.ConfigManager.ReadAndGet()
	if err != nil {
		log.Fatalf("Failed to read config: %v", err)
	}

	currentTime := time.Now().UnixNano() / 1e6
	log.Debugf("Current time (ms): %d, Token expiration time: %d", currentTime, conf.AccessTokenExpire)

	if currentTime >= conf.AccessTokenExpire {
		log.Warnln("Access token expired, requesting new token")

		var err error
		maxRetries := 3
		for i := 0; i <= maxRetries; i++ {
			tm.AccessToken, tm.AccessTokenExpire, err = tm.requestAccessToken()
			if err == nil {
				log.Debugln("New access token obtained")
				tm.ClientToken, err = tm.requestClientToken(tm.ClientId)
				if err != nil {
					log.Errorf("Failed to request client token: %v", err)
					return "", 0
				}
				log.Debugln("New client token obtained")
				return tm.AccessToken, tm.AccessTokenExpire
			}
			if i < maxRetries {
				log.Warnf("Failed to request new access token, trying to refresh TOTP secret (attempt %d/%d)", i+1, maxRetries)
				newTotp, err := injector.QuickIntercept()
				if err != nil {
					log.Errorf("Error while refreshing TOTP secret: %v", err)
				} else {
					for _, s := range newTotp {
						if s.Version > tm.ConfigManager.Get().TOTP.Version {
							c := tm.ConfigManager.Get()
							c.TOTP.Version = s.Version
							c.TOTP.Secret = s.Secret
							tm.ConfigManager.Set(c)
						}
					}
					log.Infof("TOTP secret refreshed to version %d", tm.ConfigManager.Get().TOTP.Version)
					log.Debugf("TOTP secret: %s", tm.ConfigManager.Get().TOTP.Secret)
				}
			} else {
				log.Errorf("Error while requesting new access token after %d attempts: %v", maxRetries, err)
			}
		}
		return "", 0
	}

	log.Debugln("Using cached access token")
	return conf.AccessToken, conf.AccessTokenExpire
}

func (tm *Manager) getTotp() (string, time.Time, error) {
	timeNow := time.Now()
	totpStr, err := totp.GenerateCode(tm.ConfigManager.Get().TOTP.Secret, timeNow)
	if err != nil {
		return "", time.Time{}, err
	}
	return totpStr, timeNow, nil
}
