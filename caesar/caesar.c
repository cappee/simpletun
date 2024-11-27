#include <caesar.h>

/**************************************************************************
 * caesar_cipher: aplica el cifrado caesar-N a los datos proporcionados.  *
 **************************************************************************/
void caesar_cipher(char *data, size_t length) {
    for (size_t i = 0; i < length; i++) {
        data[i] = (data[i] + N) % 256;
    }
}

/**************************************************************************
 * caesar_decipher: aplica la decodificación caesar-N a los datos.        *
 **************************************************************************/
void caesar_decipher(char *data, size_t length) {
    for (size_t i = 0; i < length; i++) {
        data[i] = (data[i] + 256 - N) % 256;
    }
}