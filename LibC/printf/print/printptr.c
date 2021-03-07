/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/ptr.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_ptr(nprintf_param_t *p, va_list args)
{
    void *ptr = va_arg(args, void *);

    if (ptr == NULL) {
        nstrbuf(&p->buf, "(nil)");
        return;
    }
    *(p->buf)++ = '0';
    *(p->buf)++ = (p->isupper ? 'X' : 'x');
    nullbuf(&p->buf, (ulong)ptr, \
    p->isupper ? "0123456789ABCDEF" : "0123456789abcdef");
}