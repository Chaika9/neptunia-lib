/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - string
*/

#ifndef _NEP_STRING_H
#define _NEP_STRING_H

#include <nep/nctype.h>

extern int natoi(char const *str);
extern double natof(char const *str);

extern nsize_t nstrlen(const char *str);

extern char *nstrlwr(char *str);
extern char *nstrupr(char *str);
extern char *nstrrev(char *str);

extern char *nstrcat(char *dest, const char *src);
extern char *nstrncpy(char *dest, const char *src, nsize_t length);
extern char *nstrbcat(char *dest, const char *src);

extern int nstrcmp(const char *first, const char *second);
extern int nstrncmp(const char *s1, const char *s2, nsize_t length);

extern char *nstrcpy(char *dest, const char *src);
extern char *nstrncpy(char *dest, const char *src, const nsize_t at);

extern void *nmemcpy(void *dest, const void *src, nsize_t size);
extern void *nmemset(void *dest, int value, nsize_t size);
extern void *nmemmove(void *dest, const void *src, nsize_t size);

extern char *nstrdup(const char *src);

extern char *nstrstr(char *str, const char *find);

extern bool nstr_isalpha(char *str);
extern bool nstr_isdigit(char *str);

extern void nstrbuf(char **buf, const char *str);
extern void nullbuf(char **buf, ullong value, const char *base);

extern long l_at_check_format(char const *str, bool *isneg);

#endif