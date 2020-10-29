/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** math - nround.
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <nep/nmath.h>

double nround(double value, uint precision)
{
    nsize_t len = ndeclen((uint)value) + precision - 1;
    double power = npow(10, len);

    value *= power;
    return (value >= 0) ? ((long long)(value + 0.5)) / power \
    : ((long long)(value - 0.5)) / power;
}