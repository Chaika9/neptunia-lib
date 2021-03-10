/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_format
*/

#include <hnep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nmem.h>
#include <nep/nstring.h>
#include <stdlib.h>

struct string_format_s {
    char flag;
    char *(*handler)(char *, nsize_t *, va_list);
};

PRIVATE struct string_format_s formats[] = {
    {'s', l_format_string},
    {0, NULL}
};

PRIVATE char *format_call_handler(char flag, char *buffer, nsize_t *size,
va_list args)
{
    for (nsize_t i = 0; formats[i].flag; i++) {
        if (formats[i].flag == flag)
            buffer = formats[i].handler(buffer, size, args);
    }
    return buffer;
}

char *string_format(char const *format, ...)
{
    char *buffer = NULL;
    va_list args;
    nsize_t size = 1;

    va_start(args, format);
    while (*format) {
        if (*format != '%') {
            buffer = nrealloc(buffer, size);
            buffer[size++ - 1] = *format++;
            continue;
        }
        format++;
        buffer = format_call_handler(ntolower(*format++), buffer, &size, args);
    }
    va_end(args);
    buffer[size - 1] = 0;
    return buffer;
}