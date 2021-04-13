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
    int i;

    if (src == NULL || str == NULL)
        return NULL;
    if ((i = string_index_of(src, str)) == -1)
        return src;
    if (cmp == NULL) {
        nmemmove(&src[i], &src[i + nstrlen(str)], nstrlen(src) - i);
    } else {
        if (!cmp(&src[i], str))
            return src;
        nmemmove(&src[i], &src[i + nstrlen(str)], nstrlen(src) - i);
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