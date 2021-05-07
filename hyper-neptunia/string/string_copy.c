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
    nsize_t len = 0;

    if (src == NULL)
        return NULL;
    len = nstrlen(src);
    if ((dest = ncalloc(len + 1, sizeof(char))) == NULL)
        return NULL;
    nmemcpy(dest, src, len);
    return dest;
}