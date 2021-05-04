/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string/format - format_int
*/

#include <hnep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nmem.h>
#include <nep/nstring.h>
#include <nep/nmath.h>

char *l_format_int(char *buffer, nsize_t *size, va_list args)
{
    int val = va_arg(args, int);
    nsize_t len = ndeclen(val);
    char *ptr;

    if (val < 0)
        len++;
    buffer = nrealloc(buffer, *size, *size + len);
    if (val < 0) {
        buffer[*size - 1] = '-';
        ptr = buffer + *size;
    } else {
        ptr = buffer + *size - 1;
    }
    nullbuf(&ptr, abs(val), "0123456789");
    *size += len;
    return buffer;
}