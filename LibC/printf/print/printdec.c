/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/dec.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_dec(nprintf_param_t *p, va_list args)
{
    long long val;

    if (p->big == 2) {
        val = va_arg(args, long long);
    } else if (p->big == 1) {
        val = (long long)va_arg(args, long);
    } else {
        val = (long long)va_arg(args, int);
    }
    if (val < 0) {
        *(p->buf)++ = '-';
        val = -val;
    }
    local_print_manage_base(&p->buf, val, "0123456789", p->isupper);
}