/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - nprintf
*/

#pragma once

#include <stdio.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

#ifndef	__NEP_PRINTF_H
#define	__NEP_PRINTF_H

#ifndef	NPRINTF_BUFFER_SIZE
#define NPRINTF_BUFFER_SIZE (1024)
#endif

typedef struct {
    va_list *args;
    char *buf;
    boolean isupper;
    boolean alt;
    uint precision;
    uint wight;
    char w_ch;
    int big;
    boolean plus;
    boolean minos;
} nprintf_param_t;

extern nsize_t nprintf(const char *format, ...);
extern nsize_t nvprintf(const char *format, va_list args);

extern nsize_t nsprintf(char *buf, const char *format, ...);
extern nsize_t nvsprintf(char *buf, const char *format, va_list args);

extern nsize_t nfprintf(FILE *stream, const char *format, ...);
extern nsize_t nvfprintf(FILE *stream, const char *format, va_list args);

extern void local_parse_param(const char **c, nprintf_param_t *p);

extern void local_parse_param_precision(const char **ch, nprintf_param_t *p);
extern void local_parse_param_big(const char **ch, nprintf_param_t *p);
extern void local_parse_param_sign(const char **ch, nprintf_param_t *p);
extern void local_parse_param_wight(const char **ch, nprintf_param_t *p);

extern void local_print_char(nprintf_param_t *param, va_list args);
extern void local_print_str(nprintf_param_t *param, va_list args);
extern void local_print_dec(nprintf_param_t *param, va_list args);
extern void local_print_ulong(nprintf_param_t *param, va_list args);
extern void local_print_hex(nprintf_param_t *param, va_list args);
extern void local_print_octal(nprintf_param_t *param, va_list args);
extern void local_print_binary(nprintf_param_t *p, va_list args);
extern void local_print_float(nprintf_param_t *param, va_list args);
extern void local_print_ptr(nprintf_param_t *param, va_list args);
extern void local_print_list(nprintf_param_t *param, va_list args);
extern void local_print_hashmap(nprintf_param_t *p, va_list args);

extern void local_print_manage_base(char **_buf, ullong value, \
const char *base, boolean up);
extern void local_print_manage_str(char **buf, const char *str);

#endif