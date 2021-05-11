/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_isempty
*/

#include <hnep/nstring.h>

bool string_isempty(char const *str)
{
    while (*str) {
        if (!nisspace(*str++))
            return false;
    }
    return true;
}