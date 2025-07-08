package spotify

import (
	"encoding/json"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"io"
	"net/http"
	"os"
	"path/filepath"
	"strings"
)

func readCDMs() []string {
	cdms, err := filepath.Glob(filepath.Join("cdm", "*.wvd"))
	if err != nil || len(cdms) == 0 {
		log.Warnf(`No CDMs found in "./cdm" folder, using embedded CDM instead`)
		return nil
	}
	cdmData, err = os.ReadFile(cdms[0])
	if err != nil {
		log.Fatalf("Failed to read CDM file: %s", cdms[0])
	}
	return cdms
}

func requestClientBases() []string {
	resp, err := http.Get("https://apresolve.spotify.com?type=spclient")
	if err != nil {
		log.Errorf("Unable to request client bases: %v", err)
		return nil
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		body, _ := io.ReadAll(resp.Body)
		log.Errorf("Unable to request client bases (%d): %s", resp.StatusCode, body)
		return nil
	}

	var response struct {
		SpClient []string `json:"spclient"`
	}

	if err := json.NewDecoder(resp.Body).Decode(&response); err != nil {
		log.Errorf("Error decoding client bases response: %v", err)
		return nil
	}

	var formattedEndpoints []string
	for _, endpoint := range response.SpClient {
		formatted := formatEndpoint(endpoint)
		if formatted != "" {
			formattedEndpoints = append(formattedEndpoints, formatted)
		}
	}

	return formattedEndpoints
}

func formatEndpoint(endpoint string) string {
	parts := strings.Split(endpoint, ":")
	if len(parts) != 2 {
		log.Errorf("Invalid endpoint format: %s", endpoint)
		return endpoint
	}
	domain, port := parts[0], parts[1]

	switch port {
	case "80":
		return fmt.Sprintf("http://%s", domain)
	default:
		return fmt.Sprintf("https://%s", domain)
	}
}
