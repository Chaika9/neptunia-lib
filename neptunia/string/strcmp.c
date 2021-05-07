/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrcmp.
*/

#include <nep/nctype.h>

int nstrcmp(char const *s1, char const *s2)
{
    nsize_t i;

    for (i = 0; s1[i]; i++) {
        if (s1[i] != s2[i])
            return 1;
    }
    if (s1[i] != s2[i])
        return 1;
    return 0;
}

int nstrncmp(char const *s1, char const *s2, nsize_t length)
{
    nsize_t i = 0;

    if (s1[i] != s2[i])
        return 1;
    for (i = 0; s1[i] && i < length; i++) {
        if (s1[i] != s2[i])
            return 1;
    }
    return 0;
}