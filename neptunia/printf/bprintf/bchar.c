/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/char.
*/

#include <nep/nva_list.h>

void l_nbprintf_char(char **buf, va_list args)
{
    int ch = va_arg(args, int);

    *(*buf)++ = ch;
}