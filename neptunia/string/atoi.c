/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - natoi.
*/

#include <nep/nstring.h>
#include <nep/nlimit.h>
#include <nep/nctype.h>

int natoi(char const *str)
{
    long n = 0;
    bool isneg = false;
    long index;

    if (str == NULL)
        return 0;
    if ((index = l_at_check_format(str, &isneg)) == -1)
        return 0;
    for (long i = 0; i < index; i++)
        str++;
    while (nisdigit(*str)) {
        n = n * 10 + (*str++ - '0');
        if ((isneg && n < INT_MIN) || (!isneg && n > INT_MAX))
            return 0;
    }
    return (int)(isneg ? -n : n);
}