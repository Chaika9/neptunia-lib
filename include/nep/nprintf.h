/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - nprintf
*/

#ifndef _NEP_PRINTF_H
#define _NEP_PRINTF_H

#include <nep/nhashmap.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>
#include <stdio.h>

#ifndef	NPRINTF_BUFFER_SIZE
#define NPRINTF_BUFFER_SIZE (1024)
#endif

#ifdef _IO_USE_OLD_IO_FILE
#define IO_FILENO(stream) ((stream)->_file)
#elif defined(_FSTDIO)
#define IO_FILENO(stream) ((stream)->_file)
#else
#define IO_FILENO(stream) ((stream)->_fileno)
#endif

typedef struct {
    va_list *args;
    char *buf;
    bool isupper;
    bool alt;
    uint precision;
    uint wight;
    char w_ch;
    int big;
    bool plus;
    bool minos;
} nprintf_param_t;

extern nsize_t nprintf(char const *format, ...);
extern nsize_t nvprintf(char const *format, va_list args);

extern nsize_t nsprintf(char *buf, char const *format, ...);
extern nsize_t nvsprintf(char *buf, char const *format, va_list args);

extern nsize_t nfprintf(FILE *stream, char const *format, ...);
extern nsize_t nvfprintf(FILE *stream, char const *format, va_list args);

extern void l_parse_param(char const **c, nprintf_param_t *p);

extern void l_parse_param_precision(char const **ch, nprintf_param_t *p);
extern void l_parse_param_big(char const **ch, nprintf_param_t *p);
extern void l_parse_param_sign(char const **ch, nprintf_param_t *p);
extern void l_parse_param_wight(char const **ch, nprintf_param_t *p);

extern void l_print_char(nprintf_param_t *p, va_list args);
extern void l_print_str(nprintf_param_t *p, va_list args);
extern void l_print_dec(nprintf_param_t *p, va_list args);
extern void l_print_ulong(nprintf_param_t *p, va_list args);
extern void l_print_hex(nprintf_param_t *p, va_list args);
extern void l_print_octal(nprintf_param_t *p, va_list args);
extern void l_print_binary(nprintf_param_t *p, va_list args);
extern void l_print_float(nprintf_param_t *p, va_list args);
extern void l_print_ptr(nprintf_param_t *p, va_list args);
extern void l_print_list(nprintf_param_t *p, va_list args);
extern void l_print_hashmap(nprintf_param_t *p, va_list args);

#define BPRINTF_REG() \
    hashmap_t *nbprintf_balises;

extern hashmap_t *nbprintf_balises;

extern nsize_t nbprintf(char const *format, ...);
extern void nbprintf_register_balise(char const *flag, void(*func)());

extern void l_nbprintf_char(char **buf, va_list args);
extern void l_nbprintf_string(char **buf, va_list args);
extern void l_nbprintf_int(char **buf, va_list args);
extern void l_nbprintf_long(char **buf, va_list args);
extern void l_nbprintf_llong(char **buf, va_list args);
extern void l_nbprintf_ullong(char **buf, va_list args);
extern void l_nbprintf_list(char **buf, va_list args);

#endif