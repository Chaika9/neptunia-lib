/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/int.
*/

#include <nep/nstring.h>
#include <nep/nva_list.h>

void l_nbprintf_ullong(char **buf, va_list args)
{
    ullong val = va_arg(args, ullong);

    nullbuf(buf, val, "0123456789");
}