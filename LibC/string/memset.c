/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** string - nmemset
*/

#include <nep/nctype.h>

void *nmemset(void *dest, int value, nsize_t size)
{
    u8 *tmp = (u8 *)dest;

    while (size) {
        *tmp++ = value;
        size--;
    }
    return dest;
}