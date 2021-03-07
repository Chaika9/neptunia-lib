/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** math - nsqrt
*/

#include <nep/nctype.h>

uint nsqrt(uint value)
{
    uint result = 0;

    if (value == 1)
        return 1;
    for (nsize_t i = 0; i <= value; i++) {
        result++;
        i = result * result;
        if (i > value)
            return 0;
    }
    return result;
}

double nfsqrt(double value UNUSED)
{
    return 0;
}