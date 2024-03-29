/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_concat, string_concat_wa
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

void string_concat(char *dest, char const *str)
{
    nstrcat(dest, str);
}

char *string_concat_wa(char *dest, char const *str)
{
    nsize_t dest_len = 0;
    nsize_t str_len = nstrlen(str);

    if (dest != NULL)
        dest_len = nstrlen(dest);
    dest = nrealloc(dest, dest_len, dest_len + str_len + 1);
    if (dest == NULL)
        return NULL;
    nmemcpy(dest + dest_len, str, str_len);
    return dest;
}