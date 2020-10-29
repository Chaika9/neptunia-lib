/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrcat, nstrncat, nstrbcat.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

char *nstrcat(char *dest, const char *src)
{
    char *end;

    for (end = dest; *end; end++);
    while (*src)
        *end++ = *src++;
    *end = '\0';
    return dest;
}

char *nstrncat(char *dest, const char *src, nsize_t size)
{
    char *end;

    for (end = dest; *end; end++);
    for (nsize_t i = 0; *src && i < size; i++)
        *end++ = *src++;
    *end = '\0';
    return dest;
}

char *nstrbcat(char *dest, const char *src)
{
    nstrrev(dest);
    nstrcat(dest, src);
    nstrrev(dest);
    return dest;
}
