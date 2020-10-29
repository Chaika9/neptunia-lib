/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - nsprintf.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

nsize_t nsprintf(char *buf, const char *format, ...)
{
    va_list args;
    nsize_t out = 0;

    va_start(args, format);
    out = nvsprintf(buf, format, args);
    va_end(args);
    return out;
}