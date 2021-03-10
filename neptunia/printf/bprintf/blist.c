/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf/list.
*/

#include <nep/nstring.h>
#include <nep/nlist.h>
#include <nep/nhashmap.h>
#include <nep/nva_list.h>

void l_nbprintf_list(char **buf, va_list args)
{
    list_t *list = va_arg(args, list_t *);

    if (list == NULL || list->print == NULL) {
        nstrbuf(buf, "(null)");
        return;
    }
    list->print(buf, list);
}