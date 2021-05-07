/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - natof.
*/

#include <nep/nstring.h>
#include <nep/nctype.h>

PRIVATE void parse_float(double *n, char const **_str)
{
    char const *str = *_str;
    int e = 0;

    str++;
    while (nisdigit(*str)) {
        *n = *n * 10 + (*str++ - '0');
        e--;
    }
    while (e < 0) {
        *n *= 0.1f;
        e++;
    }
}

double natof(char const *str)
{
    double n = 0.0;
    bool isneg = false;
    long index;

    if (str == NULL)
        return 0;
    if ((index = l_at_check_format(str, &isneg)) == -1)
        return 0;
    for (long i = 0; i < index; i++)
        str++;
    while (nisdigit(*str))
        n = n * 10 + (*str++ - '0');
    if (*str == '.' || *str == 44)
        parse_float(&n, &str);
    return (isneg ? -n : n);
}