/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/string.
*/

#include <nep/nstring.h>
#include <nep/nva_list.h>

void local_nbprintf_string(char **buf, va_list args)
{
    char *str = va_arg(args, char *);

    nstrbuf(buf, str);
}