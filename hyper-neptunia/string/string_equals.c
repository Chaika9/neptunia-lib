/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_equals, string_equals_ignore_case
*/

#include <hnep/nstring.h>

int string_equals(char const *str1, char const *str2)
{
    while (*str1 || *str2) {
        if (*str1 != *str2)
            return 0;
        str1++;
        str2++;
    }
    return 1;
}

int string_equals_ic(char const *str1, char const *str2)
{
    while (*str1 || *str2) {
        if (ntolower(*str1) != ntolower(*str2))
            return 0;
        str1++;
        str2++;
    }
    return 1;
}