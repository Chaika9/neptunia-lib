/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/list.
*/

#include <nep/nprintf.h>
#include <nep/nlist.h>
#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void local_print_list(nprintf_param_t *p, va_list args)
{
    list_t *list = va_arg(args, list_t *);

    if (list == NULL || list->print == NULL) {
        nstrbuf(&p->buf, "(list not define)");
        return;
    }
    list->print(&p->buf, list);
}

void local_print_hashmap(nprintf_param_t *p, va_list args)
{
    hashmap_t *list = va_arg(args, hashmap_t *);

    if (list == NULL || list->print == NULL) {
        nstrbuf(&p->buf, "(list not define)");
        return;
    }
    list->print(&p->buf, list);
}