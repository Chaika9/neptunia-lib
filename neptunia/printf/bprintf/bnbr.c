/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/int.
*/

#include <nep/nstring.h>
#include <nep/nmath.h>
#include <nep/nva_list.h>

void l_nbprintf_int(char **buf, va_list args)
{
    int val = va_arg(args, int);

    if (val < 0)
        *(*buf)++ = '-';
    nullbuf(buf, ABS(val), "0123456789");
}

void l_nbprintf_long(char **buf, va_list args)
{
    long val = va_arg(args, long);

    if (val < 0)
        *(*buf)++ = '-';
    nullbuf(buf, ABS(val), "0123456789");
}

void l_nbprintf_llong(char **buf, va_list args)
{
    long long val = va_arg(args, long long);

    if (val < 0)
        *(*buf)++ = '-';
    nullbuf(buf, ABS(val), "0123456789");
}