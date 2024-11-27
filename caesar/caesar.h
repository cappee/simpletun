#ifndef CAESAR_CIPHER_H
#define CAESAR_CIPHER_H

#include <stddef.h>

extern const int N;

void caesar_cipher(char *data, size_t length);

void caesar_decipher(char *data, size_t length);

#endif // CAESAR_CIPHER_H
