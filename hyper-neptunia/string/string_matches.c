/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_matches, string_matches_to_table
*/

#include <hnep/nstring.h>
#include <nep/nmem.h>

PRIVATE regex_t regex_flags[] = {
    {'.', regex_skip},
    {0, NULL}
};

int l_isregexflag(int c)
{
    for (nsize_t i = 0; regex_flags[i].flag; i++) {
        if (regex_flags[i].flag == c)
            return 1;
    }
    return 0;
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

    for (int i = 1; 1; i++) {
        ptr = regex_test(ptr + i - 1, regex);
        if (ptr == NULL)
            break;
        ptrs = nrealloc(ptrs, sizeof(char *) * i);
        ptrs[i - 1] = ptr;
    }
    return ptrs;
}

char *string_matches(char const *str, char const *regex)
{
    return (regex_test(str, regex));
}