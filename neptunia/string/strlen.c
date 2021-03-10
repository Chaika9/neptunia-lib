/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrlen.
*/

#include <nep/nctype.h>

nsize_t nstrlen(const char *str)
{
    nsize_t len;

    for (len = 0; *str; str++)
        len++;
    return len;
}