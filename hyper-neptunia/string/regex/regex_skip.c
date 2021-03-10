/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string/regex - regex_skip
*/

#include <hnep/nstring.h>

char *regex_skip(char const *str, char **regex)
{
    char *ptr = NULL;

    (*regex)++;
    if (**regex == '*') {
        (*regex)++;
        ptr = regex_find(str, regex);
    }
    if (**regex == '+') {
        (*regex)++;
        ptr = regex_find(str, regex);
    }
    return ptr;
}