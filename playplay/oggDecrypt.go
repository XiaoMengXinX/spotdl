package playplay

import (
	"crypto/aes"
	"crypto/cipher"
	"encoding/hex"
	"fmt"
	"io"
)

func createAESCTRCipher(key []byte) (cipher.Stream, error) {
	if len(key) != 16 {
		return nil, fmt.Errorf("invalid key length: expected 16 bytes, got %d", len(key))
	}

	nonce, _ := hex.DecodeString("72e067fbddcbcf77")
	iv, _ := hex.DecodeString("ebe8bc643f630d93")
	ctrIV := append(nonce, iv...)

	block, err := aes.NewCipher(key)
	if err != nil {
		return nil, fmt.Errorf("failed to create AES cipher: %v", err)
	}

	stream := cipher.NewCTR(block, ctrIV)
	return stream, nil
}

func DecryptFileStream(key []byte, input io.Reader, output io.Writer) error {
	stream, err := createAESCTRCipher(key)
	if err != nil {
		return err
	}

	data, err := io.ReadAll(input)
	if err != nil {
		return fmt.Errorf("failed to read input: %v", err)
	}

	decrypted := make([]byte, len(data))
	stream.XORKeyStream(decrypted, data)

	if len(decrypted) > 167 {
		if _, err := output.Write(decrypted[167:]); err != nil {
			return fmt.Errorf("failed to write output: %v", err)
		}
	} else {
		return fmt.Errorf("decrypted data is too short")
	}

	return nil
}
