#ifndef PPDECRYPT_H
#define PPDECRYPT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ppdecrypt(const uint8_t key_basis[16], const uint8_t file_id[20], uint8_t dst[16]);

#ifdef __cplusplus
}
#endif

#endif
