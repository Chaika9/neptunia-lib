/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrlen.
*/

#include <nep/nctype.h>

nsize_t nstrlen(char const *str)
{
    nsize_t len = 0;

    if (str == NULL)
        return 0;
    for (; *str; str++)
        len++;
    return len;
}