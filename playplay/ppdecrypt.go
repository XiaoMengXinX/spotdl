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

const PlayPlayToken = `01284ff3343a03d01f1b89218a6ad75e`

func PlayPlayDecrypt(keyBasis [16]byte, fileID [20]byte) [16]byte {
	var buf [16]byte

	C.ppdecrypt(
		(*C.uint8_t)(unsafe.Pointer(&keyBasis[0])),
		(*C.uint8_t)(unsafe.Pointer(&fileID[0])),
		(*C.uint8_t)(unsafe.Pointer(&buf[0])),
	)
	return buf
}
