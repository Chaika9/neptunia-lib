/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/string.
*/

#include <nep/nstring.h>
#include <nep/nva_list.h>

void l_nbprintf_string(char **buf, va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL) {
        nstrbuf(buf, "(null)");
        return;
    }
    nstrbuf(buf, str);
}