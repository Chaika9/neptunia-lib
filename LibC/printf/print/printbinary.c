/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/binary.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_binary(nprintf_param_t *p, va_list args)
{
    ullong val;

    if (p->big == 2) {
        val = va_arg(args, ullong);
    } else {
        val = (ullong)va_arg(args, ulong);
    }
    nullbuf(&p->buf, val, "01");
}