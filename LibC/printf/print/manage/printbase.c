/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/base.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nmath.h>
#include <nep/nctype.h>

void local_print_manage_base(char **buf, ullong value, \
const char *base, boolean up)
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
        *(*buf)++ = (up ? ntoupper(base[result]) \
        : base[result]);
    }
}