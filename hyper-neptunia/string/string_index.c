/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_index_of
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

int string_index_of(char const *src, char const *str)
{
    int index = -1;
    nsize_t len = nstrlen(str);

    for (nsize_t i = 0; *src; i++) {
        if (string_equals_at_nb(src, str, len)) {
            index = i;
            break;
        }
        src++;
    }
    return index;
}