/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** header - string
*/

#ifndef _HNEP_STRING_H
#define _HNEP_STRING_H

#include <nep/nctype.h>
#include <nep/nva_list.h>

char *string_create(char const *str);

int string_index_of(char const *src, char const *str);

int string_contains(char const *src, char const *str);

int string_equals_at_nb(char const *str1, char const *str2,
nsize_t tovalue);
int string_equals_at_nb_ic(char const *str1, char const *str2,
nsize_t tovalue);

int string_equals_at_string(char const *str1, char const *str2,
char const *tostr);
int string_equals_at_string_ic(char const *str1, char const *str2,
char const *tostr);

int string_equals(char const *str1, char const *str2);
int string_equals_ic(char const *str1, char const *str2);

void string_copy(char *dest, char const *src);
char *string_copy_wa(char const *src);

void string_copy_at_nb(char *dest, char const *src, nsize_t atvalue);
char *string_copy_at_nb_wa(char const *src, nsize_t atvalue);

void string_copy_at_string(char *dest, char const *src, char const *atstr);
char *string_copy_at_string_wa(char const *src, char const *atstr);

void string_concat(char *dest, const char *str);
char *string_concat_wa(char *dest, const char *str);

char **string_split(char const *src, char const *str);

void string_table_free(char **table);

char *string_remove(char *src, char const *str, bool(*cmp)());
char *string_remove_rec(char *src, char const *str, bool(*cmp)());

char **string_matches_to_table(char const *str, char const *regex);
char *string_matches(char const *str, char const *regex);

char *string_format(char const *format, ...);

typedef struct {
    char flag;
    char *(*handler)(char const *, char **);
} regex_t;

int l_isregexflag(int c);
regex_t l_get_regex_flag(char flag);

char *l_format_string(char *buffer, nsize_t *size, va_list args);

char *regex_test(char const *str, char const *regex);

char *regex_find(char const *str, char **regex);
char *regex_skip(char const *str, char **regex);

#endif