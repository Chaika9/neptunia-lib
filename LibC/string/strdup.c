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
    char *dest = malloc(sizeof(char) * nstrlen(src));

    if (!dest)
        return NULL;
    nstrcpy(dest, src);
    return dest;
}