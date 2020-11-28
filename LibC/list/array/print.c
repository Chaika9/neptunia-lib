/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/print.
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nprintf.h>

#include <stdio.h>

void list_print_str(char **_buf, list_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    list_foreach(node, list) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            nstrbuf(&buf, (char *)node->value);
        }
        if (node->next)
            nstrbuf(&buf, ", ");
    }
    *buf++ = '}';
    *_buf = buf;
}

void list_print_int(char **_buf, list_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    list_foreach(node, list) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            nullbuf(&buf, *((int *)node->value), "0123456789");
        }
        if (node->next)
            nstrbuf(&buf, ", ");
    }
    *buf++ = '}';
    *_buf = buf;
}