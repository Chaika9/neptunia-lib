/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_remove
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

char *string_remove(char *src, char const *str, bool(*cmp)())
{
    int index;

    if (src == NULL || str == NULL)
        return NULL;
    index = string_index_of(src, str);
    if (index == -1)
        return src;
    if (cmp == NULL) {
        nmemmove(&src[index], &src[index + nstrlen(str)], nstrlen(src) - index);
    } else {
        if (!cmp(&src[index], str))
            return src;
        nmemmove(&src[index], &src[index + nstrlen(str)], nstrlen(src) - index);
    }
    return src;
}

char *string_remove_rec(char *src, char const *str, bool(*cmp)())
{
    char *dest = src;
    int index;

    if (src == NULL || str == NULL)
        return NULL;
    while (true) {
        index = string_index_of(dest, str);
        if (index == -1)
            break;
        string_remove(dest, str, cmp);
        dest += index + 1;
    }
    return src;
}