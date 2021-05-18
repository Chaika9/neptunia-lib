/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_start_with
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

bool string_start_with(char const *src, char const *str, nsize_t index)
{
    size_t src_len = nstrlen(src);

    if (src == NULL || str == NULL)
        return false;
    if (src_len < index)
        return false;
    return (string_equals_at_nb(src + index, str, src_len));
}