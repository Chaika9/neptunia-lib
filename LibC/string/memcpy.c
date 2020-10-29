/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nmemcpy.
*/

#include <nep/nctype.h>

void *nmemcpy(void *dest, const void *src, nsize_t size)
{
    const u8 *sp = (const u8 *)src;
    u8 *dp = (u8 *)dest;

    while (size) {
        *dp++ = *sp++;
        size--;
    }
    return dest;
}