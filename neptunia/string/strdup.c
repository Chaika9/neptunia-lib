/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrdup.
*/

#include <nep/nstring.h>
#include <nep/nmem.h>

char *nstrdup(const char *src)
{
    char *dest;

    if (src == NULL)
        return NULL;
    dest = ncalloc(nstrlen(src) + 1, sizeof(char));
    if (dest == NULL)
        return NULL;
    nstrcpy(dest, src);
    return dest;
}