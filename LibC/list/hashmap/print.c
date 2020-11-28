/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/print.
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nprintf.h>

#include <stdio.h>

void hashmap_print_str(char **_buf, hashmap_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    hashmap_foreach(node, list) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            nstrbuf(&buf, (char *)node->key);
            *buf++ = 61;
            nstrbuf(&buf, (char *)node->value);
        }
        if (node->next)
            nstrbuf(&buf, ", ");
    }
    *buf++ = '}';
    *_buf = buf;
}

void hashmap_print_int(char **_buf, hashmap_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    hashmap_foreach(node, list) {
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