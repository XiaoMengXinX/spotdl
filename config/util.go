package config

import (
	"encoding/base32"
	"fmt"
	"strconv"
	"strings"
)

// EncodeTotpStr Encode TOTP string to base32
func EncodeTotpStr(input string) string {
	var obfuscated []byte
	for index, char := range input {
		key := (index % 33) + 9
		obfuscatedValue := int(char) ^ key
		obfuscated = append(obfuscated, []byte(fmt.Sprintf("%d", obfuscatedValue))...)
	}
	encoder := base32.StdEncoding.WithPadding(base32.NoPadding)
	return strings.TrimRight(encoder.EncodeToString(obfuscated), "=")
}

// DecodeTotpStr Decode TOTP string from base32
func DecodeTotpStr(encoded string) string {
	if encoded == "" {
		return ""
	}
	decoder := base32.StdEncoding.WithPadding(base32.NoPadding)
	decoded, _ := decoder.DecodeString(encoded)
	decodedStr := string(decoded)

	var numbers []int
	i := 0
	for i < len(decodedStr) {
		found := false
		for length := 3; length >= 1; length-- {
			if i+length <= len(decodedStr) {
				numStr := decodedStr[i : i+length]
				if num, err := strconv.Atoi(numStr); err == nil && num >= 0 && num <= 255 {
					numbers = append(numbers, num)
					i += length
					found = true
					break
				}
			}
		}
		if !found {
			return ""
		}
	}

	var result strings.Builder
	for index, obfuscatedValue := range numbers {
		key := (index % 33) + 9
		originalChar := obfuscatedValue ^ key
		result.WriteByte(byte(originalChar))
	}
	return result.String()
}
