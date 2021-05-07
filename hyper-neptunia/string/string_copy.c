/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_copy
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

void string_copy(char *dest, char const *src)
{
    nmemcpy(dest, src, nstrlen(src));
}

char *string_copy_wa(char const *src)
{
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    if ((dest = ncalloc(nstrlen(src) + 1, sizeof(char))) == NULL)
        return NULL;
    nmemcpy(dest, src, nstrlen(src));
    return dest;
}