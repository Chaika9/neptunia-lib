/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - assert
*/

#pragma once

extern void l_assert_fail(const char *expr, const char *filename, \
int line, void (*func)(const char *));

#ifndef ASSERT_FUNCTION
#define ASSERT_FUNCTION ((void *) 0)
#endif

#define nassert(expr) \
    if (!(expr)) { \
        ; \
    } else \
        l_assert_fail(#expr, __FILE__, __LINE__, ASSERT_FUNCTION);
