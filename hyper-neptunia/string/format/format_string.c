/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string/format - format_string
*/

#include <hnep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nmem.h>
#include <nep/nstring.h>

char *l_format_string(char *buffer, nsize_t *size, va_list args)
{
    char *str = va_arg(args, char *);
    nsize_t len = nstrlen(str);

    buffer = nrealloc(buffer, *size, *size + len);
    while (*str) {
        buffer[*size - 1] = *str++;
        *size += 1;
    }
    return buffer;
}