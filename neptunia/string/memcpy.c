/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** string - nmemcpy
*/

#include <nep/nctype.h>

void *nmemcpy(void *dest, const void *src, nsize_t size)
{
    const u8 *sp;
    u8 *dp;

    if (dest == NULL || src == NULL)
        return NULL;
    sp = (const u8 *)src;
    dp = (u8 *)dest;
    while (size && *sp) {
        *dp++ = *sp++;
        size--;
    }
    return dest;
}