package playplay

import "fmt"

// Deprecated: Remove GetPlayPlayToken due to DMCA
func GetPlayPlayToken() (string, error) {
	return "", fmt.Errorf("playplay decryption is deprecated due to DMCA, please download m4a format instead")
}

// Deprecated: Remove PlayPlayDecrypt due to DMCA
func PlayPlayDecrypt(encKey []byte, fileID []byte) (decrypted []byte, err error) {
	return
}
