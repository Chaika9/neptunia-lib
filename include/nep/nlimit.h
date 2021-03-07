/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - math
*/

#pragma once

#ifndef	__NEP_LIMIT_H
#define	__NEP_LIMIT_H

#define CHAR_MAX __SCHAR_MAX__
#define SHORT_MAX __SHRT_MAX__
#define INT_MAX __INT_MAX__
#define LONG_MAX __LONG_MAX__

#define CHAR_MIN (-__SCHAR_MAX__-1)
#define SHORT_MIN (-__SHRT_MAX__ -1)
#define INT_MIN (-__INT_MAX__  -1)
#define LONG_MIN (-__LONG_MAX__ -1L)

#define UCHAR_MAX (__SCHAR_MAX__*2  +1)
#define USHRT_MAX (__SHRT_MAX__ *2  +1)
#define UINT_MAX  (__INT_MAX__  *2U +1U)
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)

#define LONG_LONG_MAX  __LONG_LONG_MAX__
#define LONG_LONG_MIN  (-__LONG_LONG_MAX__-1LL)
#define ULONG_LONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)

#endif