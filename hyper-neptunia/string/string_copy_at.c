/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_copy_at_nb, string_copy_at_nb_wa,
** string_copy_at_string, string_copy_at_string_wa
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

void string_copy_at_nb(char *dest, char const *src, nsize_t atvalue)
{
    nmemcpy(dest, src, atvalue);
}

char *string_copy_at_nb_wa(char const *src, nsize_t atvalue)
{
    char *dest = ncalloc(1, nstrlen(src) + 1);

    nmemcpy(dest, src, atvalue);
    return dest;
}

void string_copy_at_string(char *dest, char const *src, char const *atstr)
{
    nsize_t len = nstrlen(atstr);

    while (*src) {
        if (string_equals_at_nb(src, atstr, len))
            break;
        *dest++ = *src++;
    }
}

char *string_copy_at_string_wa(char const *src, char const *atstr)
{
    return (string_copy_at_nb_wa(src, string_index_of(src, atstr)));
}