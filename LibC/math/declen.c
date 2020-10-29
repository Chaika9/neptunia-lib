/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** math - ndeclen, nudeclen.
*/

#include <nep/nmath.h>
#include <nep/nctype.h>

nsize_t ndeclen(int value)
{
    nsize_t len = 0;

    for (value = nabs(value); value > 0; len++)
        value /= 10;
    return len;
}

nsize_t nudeclen(ullong value)
{
    nsize_t len;

    for (len = 0; value > 0; len++)
        value /= 10;
    return len;
}