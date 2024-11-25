package spotify

import (
	"bytes"
	"encoding/base64"
	"encoding/hex"
	"encoding/json"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/playplay"
	widevine "github.com/iyear/gowidevine"
	"github.com/iyear/gowidevine/widevinepb"
	"google.golang.org/protobuf/proto"
	"net/http"
)

func requestPSSH(fildID string) (pssh string, err error) {
	url := fmt.Sprintf("https://seektables.scdn.co/seektable/%s.json", fildID)

	resp, err := http.Get(url)
	if err != nil {
		return "", fmt.Errorf("faied to request PSSH: %v", err)
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		return "", fmt.Errorf("faied to request PSSH with status [%d]", resp.StatusCode)
	}

	var result map[string]interface{}
	if err := json.NewDecoder(resp.Body).Decode(&result); err != nil {
		return "", fmt.Errorf("faied to request PSSH: %v", err)
	}

	pssh, ok := result["pssh"].(string)
	if !ok {
		log.Debugf("Failed to find PSSH: %+v", result)
		return "", fmt.Errorf("PSSH not found")
	}

	return pssh, nil
}

func (d *Downloader) getMp4Keys(psshStr string) ([]*widevine.Key, error) {
	device, err := widevine.NewDevice(
		widevine.FromWVD(bytes.NewReader(cdmData)),
	)
	if err != nil {
		return nil, fmt.Errorf("create device failed: %w", err)
	}
	cdm := widevine.NewCDM(device)

	psshByte, _ := base64.StdEncoding.DecodeString(psshStr)
	pssh, err := widevine.NewPSSH(psshByte)
	if err != nil {
		return nil, fmt.Errorf("parse pssh failed: %w", err)
	}

	challenge, parseLicense, err := cdm.GetLicenseChallenge(pssh, widevinepb.LicenseType_AUTOMATIC, false)
	if err != nil {
		return nil, fmt.Errorf("get license challenge failed: %w", err)
	}

	license, err := d.makeRequest(http.MethodPost, d.licenseURL, challenge)

	if err != nil {
		return nil, fmt.Errorf("request license failed: %w", err)
	}

	keys, err := parseLicense(license)
	if err != nil {
		return nil, fmt.Errorf("parse license failed: %w", err)
	}

	return keys, nil
}

func (d *Downloader) getOggKeys(fileID string) (key []byte, err error) {
	playplayToken, err := playplay.GetPlayPlayToken()
	if err != nil {
		return nil, fmt.Errorf("failed to get playplay token: %w", err)
	}
	log.Debugf("[UnPlayPlay] Token: [%s]", playplayToken)

	protoVersion := int32(2)
	reqToken, _ := hex.DecodeString(playplayToken)

	req := &playplay.PlayPlayLicenseRequest{
		Version:       &protoVersion,
		Token:         reqToken,
		Interactivity: playplay.Interactivity_INTERACTIVE.Enum(),
		ContentType:   playplay.ContentType_AUDIO_TRACK.Enum(),
	}
	body, err := proto.Marshal(req)
	if err != nil {
		return key, fmt.Errorf("serialize request failed: %v", err)
	}

	url := fmt.Sprintf("https://spclient.wg.spotify.com/playplay/v1/key/%s", fileID)
	resp, err := d.makeRequest(http.MethodPost, url, body)
	if err != nil {
		return key, fmt.Errorf("request license failed: %w", err)
	}

	var playplayResponse playplay.PlayPlayLicenseResponse
	if err = proto.Unmarshal(resp, &playplayResponse); err != nil {
		return key, fmt.Errorf("parse response failed: %v", err)
	}

	hexFileID, _ := hex.DecodeString(fileID)
	obfuscatedKey := playplayResponse.GetObfuscatedKey()

	log.Debugf("[OGG Crypt] file id: %x", hexFileID)
	log.Debugf("[OGG Crypt] obfuscated key: %x", obfuscatedKey)

	key, err = playplay.PlayPlayDecrypt(obfuscatedKey, hexFileID)

	log.Debugf("[OGG Crypt] deobfuscated key: %x", key)

	return key, nil
}
