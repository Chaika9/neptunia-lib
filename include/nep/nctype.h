/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - ctype
*/

#pragma once

#ifndef	__NEP_CTYPE_H
#define	__NEP_CTYPE_H

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long int int64_t;
typedef unsigned long int uint64_t;

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

typedef enum {
    FALSE, TRUE
} boolean;

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

extern void nswap(char *c1, char *c2);

#endif