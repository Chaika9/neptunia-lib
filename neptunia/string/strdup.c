/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrdup.
*/

#include <nep/nstring.h>
#include <stdlib.h>

char *nstrdup(const char *src)
{
    char *dest;

    if (src == NULL)
        return NULL;
    dest = malloc(sizeof(char) * nstrlen(src));
    if (dest == NULL)
        return NULL;
    nstrcpy(dest, src);
    return dest;
}