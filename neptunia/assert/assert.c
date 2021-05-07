/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** assert
*/

#include <nep/nprintf.h>

void l_assert_fail(char const *expr, char const *filename, \
int line, void (*func)(char const *))
{
    nfprintf(stderr, "Assertion failed in [%s:%d] -> (%s)\n", filename, line, \
    expr);
    if (func != NULL)
        func(NULL);
}