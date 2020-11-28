/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - string
*/

#pragma once

#include <nep/nctype.h>

#ifndef	__NEP_STRING_H
#define	__NEP_STRING_H

extern int natoi(const char *str);
extern double natof(const char *str);

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

extern char *nstrdup(const char *src);

extern char *nstrstr(char *str, const char *find);

extern boolean nstr_isalpha(char *str);
extern boolean nstr_isdigit(char *str);

extern void nstrbuf(char **buf, const char *str);
extern void nullbuf(char **buf, ullong value, const char *base);

extern long local_at_check_format(const char *str, boolean *isneg);

#endif