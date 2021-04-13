/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** string - nmemmove
*/

#include <nep/nctype.h>

void *nmemmove(void *dest, const void *src, nsize_t size)
{
    const u8 *sp = (const u8 *)src;
    u8 *dp = (u8 *)dest;

    if (sp < dp) {
        sp += size;
        dp += size;
        while (size-- > 0)
            *--dp = *--sp;
    } else {
        while (size-- > 0)
            *dp++ = *sp++;
    }
    return dest;
}