/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_ends_with
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

bool string_ends_with(char const *src, char const *str)
{
    nsize_t len = nstrlen(str);

    if (src == NULL || str == NULL)
        return false;
    src += nstrlen(src) - len;
    return (string_equals_at_nb(src, str, len));
}