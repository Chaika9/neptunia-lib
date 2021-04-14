/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_equals_at_nb, string_equals_at_nb_ic,
** string_equals_at_string, string_equals_at_string_ic
*/

#include <nep/nctype.h>
#include <nep/nstring.h>

bool string_equals_at_nb(char const *str1, char const *str2,
nsize_t atvalue)
{
    if (!atvalue)
        return true;
    if (*str1 != *str2)
        return false;
    for (nsize_t i = 0; *str1 && *str2 && i < atvalue; i++) {
        if (*str1 != *str2)
            return false;
        str1++;
        str2++;
    }
    return true;
}

bool string_equals_at_nb_ic(char const *str1, char const *str2,
nsize_t atvalue)
{
    if (!atvalue)
        return true;
    if (ntolower(*str1) != ntolower(*str2))
        return false;
    for (nsize_t i = 0; *str1 && *str2 && i < atvalue; i++) {
        if (ntolower(*str1) != ntolower(*str2))
            return false;
        str1++;
        str2++;
    }
    return true;
}

bool string_equals_at_string(char const *str1, char const *str2,
char const *atstr)
{
    nsize_t len = nstrlen(atstr);

    while (*str1 || *str2) {
        if (!string_equals_at_nb(str1, atstr, len) ||
        !string_equals_at_nb(str2, atstr, len))
            break;
        if (*str1 != *str2)
            return false;
        str1++;
        str2++;
    }
    return true;
}

bool string_equals_at_string_ic(char const *str1, char const *str2,
char const *atstr)
{
    nsize_t len = nstrlen(atstr);

    while (*str1 || *str2) {
        if (!string_equals_at_nb_ic(str1, atstr, len) ||
        !string_equals_at_nb_ic(str2, atstr, len))
            break;
        if (ntolower(*str1) != ntolower(*str2))
            return false;
        str1++;
        str2++;
    }
    return true;
}