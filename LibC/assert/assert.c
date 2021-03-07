/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** assert
*/

#include <nep/nprintf.h>

void l_assert_fail(const char *expr, const char *filename, \
int line, void (*func)(const char *))
{
    nfprintf(stderr, "Assertion failed in [%s:%d] -> (%s)\n", filename, line, \
    expr);
    if (func != NULL)
        func(NULL);
}