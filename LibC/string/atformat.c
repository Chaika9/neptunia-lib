/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** string - l_at_check_format
*/

#include <nep/nctype.h>

long l_at_check_format(const char *str, boolean *isneg)
{
    long index;
    int pair;

    for (index = 0; nisspace(*str) || (!nisdigit(*str) && !nissign(*str));
    str++) {
        if (*(str + 1) == '\0')
            return (-1);
        index++;
    }
    for (pair = 0; nissign(*str); str++) {
        if (*str == '-')
            pair++;
        index++;
    }
    *isneg = pair % 2 ? TRUE : FALSE;
    return index;
}