/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/hex.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void l_print_hex(nprintf_param_t *p, va_list args)
{
    ullong val;

    if (p->big == 2) {
        val = va_arg(args, ullong);
    } else {
        val = (ullong)va_arg(args, ulong);
    }
    if (p->alt) {
        *(p->buf)++ = '0';
        *(p->buf)++ = (p->isupper ? 'X' : 'x');
    }
    nullbuf(&p->buf, val, p->isupper ? "0123456789ABCDEF" : "0123456789abcdef");
}