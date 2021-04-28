/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_concat, string_concat_wa
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

void string_concat(char *dest, const char *str)
{
    nstrcat(dest, str);
}

char *string_concat_wa(char *dest, const char *str)
{
    nsize_t dest_len = 0;
    nsize_t str_len = nstrlen(str);
    char *_dest;

    if (dest != NULL)
        dest_len = nstrlen(dest);
    dest = nrealloc(dest, dest_len + str_len + 1);
    _dest = dest + dest_len;
    while (*str)
        *_dest++ = *str++;
    *_dest = 0;
    return dest;
}