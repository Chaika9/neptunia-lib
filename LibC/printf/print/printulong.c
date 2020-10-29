/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/ulong.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_ulong(nprintf_param_t *p, va_list args)
{
    ullong val;

    if (p->big == 2) {
        val = va_arg(args, ullong);
    } else {
        val = (ullong)va_arg(args, ulong);
    }
    local_print_base(&p->buf, val, "0123456789", p->isupper);
}