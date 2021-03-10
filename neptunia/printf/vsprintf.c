/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - nvsprintf.
*/

#include <nep/nprintf.h>
#include <nep/nmath.h>
#include <nep/nwrite.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

struct nprintf_flag {
    char flag;
    void (*handler)(nprintf_param_t *param, va_list args);
};

PRIVATE struct nprintf_flag flags[] = {
    {'c', l_print_char},
    {'s', l_print_str},
    {'d', l_print_dec}, {'i', l_print_dec},
    {'u', l_print_ulong},
    {'x', l_print_hex},
    {'o', l_print_octal},
    {'b', l_print_binary},
    {'f', l_print_float},
    {'p', l_print_ptr},
    {'z', l_print_list}, {'y', l_print_hashmap},
    {0, NULL}
};

PRIVATE void check_flag(char flag, nprintf_param_t *param, va_list args)
{
    for (nsize_t j = 0; flags[j].flag; j++) {
        if (flags[j].flag == flag)
            flags[j].handler(param, args);
    }
}

nsize_t nvsprintf(char *buf, char const *format, va_list args)
{
    char *b = buf;
    nprintf_param_t param;

    for (char const *c = format; *c; c++) {
        if (*c != '%') {
            *b++ = *c;
            continue;
        }
        c++;
        param.buf = b;
        l_parse_param(&c, &param);
        param.isupper = nisupper(*c);
        check_flag(ntolower(*c), &param, args);
        b = param.buf;
    }
    *b = 0;
    return (b - buf);
}