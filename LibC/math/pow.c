/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** math - npow, nlpow.
*/

#include <nep/nctype.h>

double npow(double value, uint power)
{
    double val = value;

    if (!power)
        return 1;
    while (power > 1) {
        value *= val;
        power--;
    }
    return value;
}

long double nlpow(long double value, uint power)
{
    long double val = value;

    if (!power)
        return 1;
    while (power > 1) {
        value *= val;
        power--;
    }
    return value;
}