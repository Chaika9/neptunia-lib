/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - regex_test
*/

#include <hnep/nstring.h>

char *regex_test(char const *str, char const *regex)
{
    char *_regex = (char *)regex;
    regex_t flag;
    char *ptr = (char *)str;
    char *start_ptr = NULL;

    while (*_regex) {
        flag = l_get_regex_flag(*_regex);
        if (flag.handler != NULL) {
            ptr = flag.handler(ptr, &_regex);
        } else {
            ptr = regex_find(ptr, &_regex);
        }
        if (ptr == NULL)
            return NULL;
        if (start_ptr == NULL)
            start_ptr = ptr;
    }
    return start_ptr;
}