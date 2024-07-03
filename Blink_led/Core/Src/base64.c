#include "base64.h"
#include <stdlib.h>

static const char base64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

// Calcule la taille de sortie pour le décodage base64
size_t base64_decoded_size(size_t input_length) {
    // Chaque 4 caractères base64 encode 3 octets de données binaires
    return (input_length / 4) * 3;
}

// Recherche l'index d'un caractère base64 dans base64_chars
static int base64_index(char c) {
    const char *ptr = strchr(base64_chars, c);
    if (ptr == NULL) return -1;
    return ptr - base64_chars;
}

// Décode les données base64 en binaire
int base64_decode(uint8_t *output, const char *input) {
    size_t input_length = strlen(input);
    size_t output_length = base64_decoded_size(input_length);

    int i, j;
    int v;
    uint32_t t;

    for (i = 0, j = 0; i < input_length; i += 4, j += 3) {
        t = (base64_index(input[i]) << 18) | (base64_index(input[i + 1]) << 12) |
            (base64_index(input[i + 2]) << 6) | base64_index(input[i + 3]);
        output[j] = (t >> 16) & 0xFF;
        if (input[i + 2] != '=')
            output[j + 1] = (t >> 8) & 0xFF;
        if (input[i + 3] != '=')
            output[j + 2] = t & 0xFF;
    }

    return output_length;
}
