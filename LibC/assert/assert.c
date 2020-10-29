/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** assert.
*/

#include <nep/nprintf.h>

void local_assert_func(const char *file, int line, const char *func, \
const char *failedexpr)
{
    nfprintf(stderr, "Assertion failed in %s:%d (%s): %s\n", file, line, func, \
    failedexpr);
}