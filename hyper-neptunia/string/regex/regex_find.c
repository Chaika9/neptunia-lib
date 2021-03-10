/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string/regex - regex_skip
*/

#include <hnep/nstring.h>
#include <nep/nctype.h>

PRIVATE int regex_str_len(char const *regex)
{
    int len = 0;

    while (*regex && !l_isregexflag(*regex)) {
        len++;
        regex++;
    }
    return len;
}

char *regex_find(char const *str, char **regex)
{
    int regex_len = regex_str_len(*regex);
    char *_str;
    char *_regex;

    while (*str) {
        _str = (char *)str;
        _regex = *regex;
        for (int i = 1; *_str == *_regex && !l_isregexflag(*_regex); i++) {
            _str++;
            _regex++;
            if (i >= regex_len) {
                *regex = _regex;
                return (char *)str;
            }
        }
        str++;
    }
    return NULL;
}