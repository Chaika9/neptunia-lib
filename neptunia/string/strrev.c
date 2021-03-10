/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrrev.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

char *nstrrev(char *str)
{
    nsize_t len = nstrlen(str);

    for (nsize_t i = len >> 1; i > 0; i--) {
        str[len] = str[i - 1];
        str[i - 1] = str[len - i];
        str[len - i] = str[len];
    }
    str[len] = 0;
    return str;
}