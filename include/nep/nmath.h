/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - math
*/

#pragma once

#include <nep/nctype.h>

#ifndef	__NEP_MATH_H
#define	__NEP_MATH_H

extern int nabs(int value);
extern long nlabs(long value);
extern long long nllabs(long long value);
extern double nfabs(double value);

extern nsize_t ndeclen(int value);
extern nsize_t nudeclen(ullong value);

extern double nfloor(double value);
extern float nfloorf(float value);

extern double npow(double value, uint power);
extern long double nlpow(long double value, uint power);

extern uint nsqrt(uint value);
extern double nfsqrt(double value);

extern double nround(double value, uint precision);

#ifndef MIN
#define MIN(a, b) ((a < b) ? a : b)
#endif

#ifndef MAX
#define MAX(a, b) (a > b) ? a : b)
#endif

#ifndef ABS
#define ABS(val) ((val < 0) ? -val : val)
#endif

#ifndef RAND_MAX
#define RAND_MAX (0x7FFFFFFF)
#endif

#endif