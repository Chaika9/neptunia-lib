/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_equals, string_equals_ignore_case
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>

char *string_format_space(char *str)
{
    for (nsize_t i = 0; str[i]; i++) {
        if (str[i] != ' ')
            continue;
        i++;
        while (str[i] && str[i] == ' ')
            nmemmove(&str[i], &str[i + 1], nstrlen(str) - i);
    }
    return str;
}