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

extern nsize_t nstrlen(char const *str);

extern char *nstrlwr(char *str);
extern char *nstrupr(char *str);
extern char *nstrrev(char *str);

extern char *nstrcat(char *dest, char const *src);
extern char *nstrncpy(char *dest, char const *src, nsize_t length);
extern char *nstrbcat(char *dest, char const *src);

extern int nstrcmp(char const *first, char const *second);
extern int nstrncmp(char const *s1, char const *s2, nsize_t length);

extern char *nstrcpy(char *dest, char const *src);
extern char *nstrncpy(char *dest, char const *src, const nsize_t at);

extern void *nmemcpy(void *dest, const void *src, nsize_t size);
extern void *nmemset(void *dest, int value, nsize_t size);
extern void *nmemmove(void *dest, const void *src, nsize_t size);

extern char *nstrdup(char const *src);

extern char *nstrstr(char *str, char const *find);

extern bool nstr_isalpha(char *str);
extern bool nstr_isdigit(char *str);

extern void nstrbuf(char **buf, char const *str);
extern void nullbuf(char **buf, ullong value, char const *base);

extern long l_at_check_format(char const *str, bool *isneg);

#endif