package playplay

/*
#cgo CXXFLAGS: -std=c++17
#include "ppdecrypt.h"
#include <stdlib.h>
*/
import "C"

import (
	"unsafe"
)

const PlayPlayToken = `0101bf34c8d0393bcda8b1d3eeaf8f3b2`

// PlayPlayDecrypt currently does not work
func PlayPlayDecrypt(keyBasis [16]byte, fileID [20]byte) [16]byte {
	var buf [16]byte

	C.ppdecrypt(
		(*C.uint8_t)(unsafe.Pointer(&keyBasis[0])),
		(*C.uint8_t)(unsafe.Pointer(&fileID[0])),
		(*C.uint8_t)(unsafe.Pointer(&buf[0])),
	)
	return buf
}
