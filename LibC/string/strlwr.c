/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrlwr.
*/

#include <nep/nctype.h>

char *nstrlwr(char *str)
{
    for (nsize_t i = 0; str[i]; i++)
        str[i] = ntolower(str[i]);
    return str;
}