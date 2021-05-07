/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nullbuf.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

void nullbuf(char **buf, ullong value, char const *base)
{
    ullong result = 0;
    ullong power = 1;
    nsize_t baselen = nstrlen(base);

    if (!value) {
        *(*buf)++ = '0';
        return;
    }
    while ((value / power) >= baselen)
        power *= baselen;
    while (power > 0) {
        result = (value / power) % baselen;
        power = power / baselen;
        *(*buf)++ = base[result];
    }
}