/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/str & print/char.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_str(nprintf_param_t *p, va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL) {
        nstrbuf(&p->buf, "(null)");
        return;
    }
    nstrbuf(&p->buf, str);
}

void local_print_char(nprintf_param_t *p, va_list args)
{
    *(p->buf)++ = (char)va_arg(args, int);
}