/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrstr.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

char *nstrstr(char *str, const char *find)
{
    nsize_t startat = 0;
    nsize_t index = 0;
    nsize_t len = nstrlen(find);

    if (!len)
        return (&str[startat]);
    for (nsize_t i = 0; str[i]; i++) {
        index = i;
        startat = i;
        for (nsize_t y = 0; str[index] == find[y]; y++) {
            if (y == len - 1)
                return (&str[startat]);
            index++;
        }
    }
    return NULL;
}