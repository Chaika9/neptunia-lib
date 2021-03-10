/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_contains
*/

#include <hnep/nstring.h>

int string_contains(char const *src, char const *str)
{
    return (string_index_of(src, str) > -1);
}