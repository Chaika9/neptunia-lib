/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/float.
*/

#include <nep/nprintf.h>
#include <nep/nmath.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_float(nprintf_param_t *p, va_list args)
{
    double val = va_arg(args, double);

    if (!p->arg_width)
        p->arg_width = 6;
    val = nround(val, p->arg_width);
    if (val < 0) {
        *(p->buf)++ = '-';
        val = -val;
    }
    local_print_base(&p->buf, val, "0123456789", p->isupper);
    *(p->buf)++ = '.';
    for (int j = 0; j < ((p->arg_width > 0 && p->arg_width < 8) \
    ? p->arg_width : 8); j++) {
        val *= 10.0;
        local_print_base(&p->buf, (long)(val) % 10, "0123456789", p->isupper);
    }
}