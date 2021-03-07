/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrupr.
*/

#include <nep/nctype.h>

char *nstrupr(char *str)
{
    for (nsize_t i = 0; str[i]; i++)
        str[i] = ntoupper(str[i]);
    return str;
}