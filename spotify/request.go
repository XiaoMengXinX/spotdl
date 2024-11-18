package spotify

import (
	"bytes"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"io"
	"net/http"
	"os"
	"path/filepath"
	"time"
)

func (d *Downloader) makeRequest(method, url string, body []byte) ([]byte, error) {
	accessToken, _ := d.TokenManager.GetAccessToken()
	var requestBody io.Reader
	if body != nil {
		requestBody = bytes.NewBuffer(body)
	}

	req, err := http.NewRequest(method, url, requestBody)
	if err != nil {
		return nil, fmt.Errorf("failed to create request: %w", err)
	}
	req.Header.Set("Authorization", "Bearer "+accessToken)
	req.Header.Set("User-Agent", "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36")
	req.Header.Set("Accept", "application/json")
	req.Header.Set("app-platform", "WebPlayer")
	req.Header.Set("spotify-app-version", "1.2.52.75.gd8ce7735")
	req.Header.Set("sec-ch-ua-platform", "macOS")
	req.Header.Set("origin", "https://open.spotify.com/")

	if acceptLanguage := d.TokenManager.ConfigManager.Get().AcceptLanguage; len(acceptLanguage) > 0 {
		req.Header.Set("Accept-Language", generateAcceptLanguageHeader(acceptLanguage))
	}

	log.Debugf("[%s] %s", method, url)
	log.Debugf("Headers: %+v", req.Header)

	client := &http.Client{Timeout: 10 * time.Second}
	resp, err := client.Do(req)
	if err != nil {
		return nil, fmt.Errorf("request failed: %w", err)
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("request to [%s] failed with status [%d]", url, resp.StatusCode)
	}
	return io.ReadAll(resp.Body)
}

func (d *Downloader) downloadURL(url, filename string) error {
	req, err := http.NewRequest("GET", url, nil)
	if err != nil {
		return fmt.Errorf("failed to create request: %v", err)
	}

	req.Header.Add("Accept", "*/*")
	req.Header.Add("User-Agent", "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36")

	log.Debugf("Start to download [%s]", filename)
	log.Debugf("[%s] %s", "GET", url)
	log.Debugf("Headers: %+v", req.Header)

	client := &http.Client{}
	resp, err := client.Do(req)
	if err != nil {
		return fmt.Errorf("request failed: %v", err)
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK && resp.StatusCode != http.StatusPartialContent {
		return fmt.Errorf("download failed with http code: %d", resp.StatusCode)
	}

	if err := os.MkdirAll(d.outputFolder, os.ModePerm); err != nil {
		return fmt.Errorf("failed to create directory: %v", err)
	}

	file, err := os.Create(filepath.Join(d.outputFolder, filename))
	if err != nil {
		return fmt.Errorf("failed to create file: %v", err)
	}
	defer file.Close()

	buffer := make([]byte, 4096)
	for {
		n, err := resp.Body.Read(buffer)
		if n > 0 {
			if _, writeErr := file.Write(buffer[:n]); writeErr != nil {
				return fmt.Errorf("failed to write to file: %v", writeErr)
			}
		}
		if err == io.EOF {
			break
		}
		if err != nil {
			return fmt.Errorf("failed to read response body: %v", err)
		}
	}
	return nil
}
