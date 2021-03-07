/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/print
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <stdio.h>

void list_print_str(char **_buf, list_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    list_foreach(list, node) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            nstrbuf(&buf, "\"");
            nstrbuf(&buf, (char *)node->value);
            nstrbuf(&buf, "\"");
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
    list_foreach(list, node) {
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