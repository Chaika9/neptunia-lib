/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/ptr.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_ptr(nprintf_param_t *p, va_list args)
{
    void *ptr = va_arg(args, void *);

    if (ptr == NULL) {
        local_print_error(&p->buf, "(nil)");
        return;
    }
    *(p->buf)++ = '0';
    *(p->buf)++ = (p->isupper ? 'X' : 'x');
    local_print_base(&p->buf, (ulong)ptr, "0123456789abcdef", p->isupper);
}