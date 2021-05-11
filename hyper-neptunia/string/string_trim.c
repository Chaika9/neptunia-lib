/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_trim
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

char *string_trim(char *str)
{
    for (nsize_t i = 0; str[i]; i++) {
        if (!nisspace(str[i]))
            continue;
        i++;
        while (str[i] && nisspace(str[i]))
            nmemmove(&str[i], &str[i + 1], nstrlen(str) - i);
    }
    return str;
}