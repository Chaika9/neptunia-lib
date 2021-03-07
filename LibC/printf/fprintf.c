/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - nfprintf, nvfprintf.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nwrite.h>
#include <nep/nmem.h>
#include <nep/nctype.h>
#include <stdlib.h>
#include <stdio.h>

nsize_t nfprintf(FILE *stream, char const *format, ...)
{
    va_list args;
    char *buff = ncalloc(1, NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    va_start(args, format);
    nvsprintf(buff, format, args);
    va_end(args);
    out = nwrite(stream->_fileno, buff);
    free(buff);
    return out;
}

nsize_t nvfprintf(FILE *stream, char const *format, va_list args)
{
    char *buff = ncalloc(1, NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    nvsprintf(buff, format, args);
    out = nwrite(stream->_fileno, buff);
    free(buff);
    return out;
}