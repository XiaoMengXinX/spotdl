package playplay

import (
	"encoding/hex"
	"fmt"
	"os/exec"
	"strings"
)

var PathToReUnplayplayBinary string
var playPlayToken string

func initDecrypt() error {
	if PathToReUnplayplayBinary == "" {
		return fmt.Errorf("re-unplayplay binary path not set")
	}

	cmd := exec.Command(PathToReUnplayplayBinary, "token")
	output, err := cmd.Output()
	if err != nil {
		return fmt.Errorf("failed to execute playplay binary: %v", err)
	}

	playPlayToken = strings.TrimSpace(string(output))
	return nil
}

func GetPlayPlayToken() (string, error) {
	if playPlayToken == "" {
		err := initDecrypt()
		if err != nil {
			return "", err
		}
	}
	return playPlayToken, nil
}

func PlayPlayDecrypt(encKey []byte, fileID []byte) (decrypted []byte, err error) {
	cmd := exec.Command(PathToReUnplayplayBinary, hex.EncodeToString(fileID), hex.EncodeToString(encKey))
	output, err := cmd.Output()
	if err != nil {
		return decrypted, fmt.Errorf("failed to execute playplay decryption command: %v", err)
	}

	decrypted, _ = hex.DecodeString(string(output))

	return
}
