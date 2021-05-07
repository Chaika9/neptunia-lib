/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrcpy, nstratcpy.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

char *nstrcpy(char *dest, char const *src)
{
    nsize_t i;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = 0;
    return dest;
}

char *nstrncpy(char *dest, char const *src, nsize_t length)
{
    nsize_t len = nstrlen(src);
    nsize_t i;

    for (i = 0; src[i] && i < length; i++)
        dest[i] = src[i];
    if (length > len)
        dest[i] = 0;
    return dest;
}