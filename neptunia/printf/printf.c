/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - nprintf, nvprintf.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nwrite.h>
#include <nep/nmem.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>
#include <stdlib.h>

nsize_t nprintf(char const *format, ...)
{
    va_list args;
    char *buf = ncalloc(1, NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    va_start(args, format);
    nvsprintf(buf, format, args);
    va_end(args);
    out = nwrite(1, buf);
    free(buf);
    return out;
}

nsize_t nvprintf(char const *format, va_list args)
{
    char *buf = ncalloc(1, NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    nvsprintf(buf, format, args);
    out = nwrite(1, buf);
    free(buf);
    return out;
}