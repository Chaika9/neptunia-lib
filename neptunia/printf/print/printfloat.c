/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/float.
*/

#include <nep/nprintf.h>
#include <nep/nmath.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void l_print_float(nprintf_param_t *p, va_list args)
{
    double val = va_arg(args, double);

    val = nround(val, p->precision);
    if (val < 0) {
        *(p->buf)++ = '-';
        val = -val;
    }
    nullbuf(&p->buf, val, "0123456789");
    *(p->buf)++ = '.';
    for (uint j = 0; j < ((p->precision > 0 && p->precision < 8) \
    ? p->precision : 8); j++) {
        val *= 10.0;
        nullbuf(&p->buf, (long)(val) % 10, "0123456789");
    }
}