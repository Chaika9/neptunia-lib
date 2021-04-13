/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** header - ctype
*/

#ifndef _NEP_CTYPE_H
#define _NEP_CTYPE_H

#include <stdio.h>

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;

#ifndef _INT64_T
#define _INT64_T
typedef signed long int int64_t;
#endif
#ifndef _UINT64_T
#define _UINT64_T
typedef unsigned long long uint64_t;
#endif

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ullong;

typedef unsigned long nsize_t;

#ifndef NULL
#define NULL (0)
#endif

#ifndef PRIVATE
#define PRIVATE static
#endif

#ifndef bool
#define bool    _Bool
#define true    (1)
#define false   (0)
#endif

#define UNUSED __attribute__((unused))

extern int nisalnum(int c);
extern int nisalpha(int c);
extern int nisascii(int c);
extern int niscntrl(int c);
extern int nisdigit(int c);
extern int nislower(int c);
extern int nisprintable(int c);
extern int nissign(int c);
extern int nisspace(int c);
extern int nisupper(int c);

extern int ntolower(int c);
extern int ntoupper(int c);

extern void nswap(void *va, void *vb, nsize_t i);

#define SWAP(a, b) nswap(&(a), &(b), sizeof(a))

#endif