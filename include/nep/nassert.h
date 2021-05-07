/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - assert
*/

#ifndef _NEP_ASSERT_H
#define _NEP_ASSERT_H

extern void l_assert_fail(char const *expr, char const *filename, \
int line, void (*func)(char const *));

#ifndef ASSERT_FUNCTION
#define ASSERT_FUNCTION ((void *) 0)
#endif

#define nassert(expr) \
    if (expr) \
        l_assert_fail(#expr, __FILE__, __LINE__, ASSERT_FUNCTION);

#endif