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
    {'c', local_print_char},
    {'s', local_print_str},
    {'d', local_print_dec}, {'i', local_print_dec},
    {'u', local_print_ulong},
    {'x', local_print_hex},
    {'o', local_print_octal},
    {'b', local_print_binary},
    {'f', local_print_float},
    {'p', local_print_ptr},
    {'z', local_print_list},
    {'\0', NULL}
};

PRIVATE void check_flag(char flag, nprintf_param_t *param, va_list args)
{
    for (nsize_t j = 0; flags[j].flag; j++) {
        if (flags[j].flag == flag)
            flags[j].handler(param, args);
    }
}

nsize_t nvsprintf(char *buf, const char *format, va_list args)
{
    char *b = buf;
    nprintf_param_t param;

    for (const char *c = format; *c; c++) {
        if (*c != '%') {
            *b++ = *c;
            continue;
        }
        c++;
        param.buf = b;
        local_parse_param(&c, &param);
        param.isupper = nisupper(*c);
        check_flag(ntolower(*c), &param, args);
        b = param.buf;
    }
    *b = '\0';
    return (b - buf);
}