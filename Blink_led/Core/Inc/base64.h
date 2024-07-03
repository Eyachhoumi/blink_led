#ifndef BASE64_LIBRARY_H
#define BASE64_LIBRARY_H

#include <stdint.h>
typedef __SIZE_TYPE__ size_t;

// Calcule la taille de sortie pour le décodage base64
size_t base64_decoded_size(size_t input_length);

// Décode les données base64 en binaire
int base64_decode(uint8_t *output, const char *input);

#endif // BASE64_LIBRARY_H
