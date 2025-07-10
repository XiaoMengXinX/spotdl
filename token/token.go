package token

import (
	"encoding/json"
	"fmt"
	"github.com/XiaoMengXinX/spotdl/config"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/pquerna/otp/totp"
	"io"
	"net/http"
	"net/url"
	"os"
	"time"
)

const (
	UserAgent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36"
)

var (
	totpEnvInit   = false
	totpVersion   = "12"
	totpSecretRaw = "kQ19C]WQEC(]02.[^q)lMk\""
	// totpSecret = HE4DSMJVHA2TGNZYHAZTQOBWGU4DIOBRGU4TOMZTG4ZTMNJXGY3TOMJRGA3TKMBRGEZDQMBRGE3TMMI
	totpSecret = EncodeTotpStr(totpSecretRaw)
)

type Manager struct {
	TokenURL          string
	SpDc              string
	AccessToken       string
	AccessTokenExpire int64
	ConfigManager     *config.Manager
}

type accessTokenData struct {
	ClientId    string `json:"clientId"`
	AccessToken string `json:"accessToken"`
	ExpireTime  int64  `json:"accessTokenExpirationTimestampMs"`
	IsAnonymous bool   `json:"isAnonymous"`
}

func initTotpFromEnv() {
	if envTotpVersion := os.Getenv("TOTP_VERSION"); envTotpVersion != "" {
		totpVersion = envTotpVersion
		log.Debugf("TOTP_VERSION loaded from environment variable: %s", envTotpVersion)
	}
	if envTotpSecret := os.Getenv("TOTP_SECRET"); envTotpSecret != "" {
		totpSecret = envTotpSecret
		log.Debugf("TOTP_SECRET loaded from environment variable: %s", envTotpSecret)
	}
	if envTotpSecretRaw := os.Getenv("TOTP_SECRET_RAW"); envTotpSecretRaw != "" {
		totpSecretRaw = envTotpSecretRaw
		totpSecret = EncodeTotpStr(totpSecretRaw)
		log.Debugf("TOTP_SECRET_RAW loaded from environment variable: %s", envTotpSecretRaw)
	}
}

func NewTokenManager() *Manager {
	if !totpEnvInit {
		initTotpFromEnv()
		totpEnvInit = true
	}
	log.Debugln("New Token Manager Created")
	return &Manager{
		TokenURL:      "https://open.spotify.com/api/token",
		ConfigManager: config.NewConfigManager(),
	}
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

func (tm *Manager) requestAccessToken(spDc string) (string, int64, error) {
	log.Debugln("Requesting access token from Spotify")
	client := &http.Client{}

	totpStr, totpTime, err := tm.getTotp()
	if err != nil {
		return "", -1, fmt.Errorf("failed to get totp: %w", err)
	}
	timeStr := fmt.Sprint(totpTime.Unix())

	reqUrl := tm.TokenURL + "?" + url.Values{
		"reason":      {"transport"},
		"productType": {"web-player"},
		"totp":        {totpStr},
		"totpServer":  {totpStr},
		"totpVer":     {totpVersion},
		"sTime":       {timeStr},
		"cTime":       {timeStr + "420"},
	}.Encode()

	req, err := http.NewRequest("GET", reqUrl, nil)
	if err != nil {
		return "", -1, fmt.Errorf("failed to create request: %w", err)
	}

	req.Header.Set("User-Agent", UserAgent)
	req.Header.Set("Accept", "application/json")
	req.Header.Set("app-platform", "WebPlayer")
	req.Header.Set("sec-ch-ua-platform", "macOS")
	req.Header.Set("origin", "https://open.spotify.com/")
	req.Header.Set("Cookie", fmt.Sprintf("sp_dc=%s", spDc))
	log.Debugf("Requesting new access token with sp_dc: %s", spDc)
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

	conf, _ := tm.ConfigManager.ReadAndGet()
	conf.AccessToken = tokenResp.AccessToken
	conf.AccessTokenExpire = tokenResp.ExpireTime
	tm.ConfigManager.Set(conf)

	log.Debugln("Access token successfully retrieved and saved to config")
	return tokenResp.AccessToken, tokenResp.ExpireTime, nil
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
		token, expire, err := tm.requestAccessToken(tm.SpDc)
		if err != nil {
			log.Errorf("Error while requesting new access token: %v", err)
			return "", 0
		}
		log.Debugln("New access token obtained")
		return token, expire
	}

	log.Debugln("Using cached access token")
	return conf.AccessToken, conf.AccessTokenExpire
}

func (tm *Manager) getTotp() (string, time.Time, error) {
	timeNow := time.Now()
	totpStr, err := totp.GenerateCode(totpSecret, timeNow)
	if err != nil {
		return "", time.Time{}, err
	}
	return totpStr, timeNow, nil
}
