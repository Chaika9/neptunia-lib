/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nswap
*/

#include <nep/nctype.h>

void nswap(void *va, void *vb, nsize_t i)
{
    uint8_t tmp;
    uint8_t *a = va;
    uint8_t *b = vb;

    while (i--) {
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}