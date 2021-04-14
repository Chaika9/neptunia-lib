/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_matches, string_matches_to_table
*/

#include <hnep/nstring.h>
#include <nep/nmem.h>

#include <stdio.h>

PRIVATE regex_t regex_flags[] = {
    {'.', regex_skip},
    {0, NULL}
};

bool l_isregexflag(int c)
{
    for (nsize_t i = 0; regex_flags[i].flag; i++) {
        if (regex_flags[i].flag == c)
            return true;
    }
    return false;
}

regex_t l_get_regex_flag(char flag)
{
    for (nsize_t i = 0; regex_flags[i].flag; i++) {
        if (regex_flags[i].flag == flag)
            return regex_flags[i];
    }
    return (regex_t){0, NULL};
}

char **string_matches_to_table(char const *str, char const *regex)
{
    char **ptrs = NULL;
    char *ptr = (char *)str;
    int i;

    for (i = 1; 1; i++) {
        ptr = regex_test(ptr + i - 1, regex);
        if (ptr == NULL)
            break;
        ptrs = nrealloc(ptrs, sizeof(char *) * (i + 1));
        ptrs[i - 1] = ptr;
    }
    if (ptrs != NULL)
        ptrs[i - 1] = 0;
    return ptrs;
}

char *string_matches(char const *str, char const *regex)
{
    return (regex_test(str, regex));
}