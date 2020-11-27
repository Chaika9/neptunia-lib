/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/print.
*/

#include <nep/nhashmap.h>
#include <nep/nprintf.h>

#include <stdio.h>

void hashmap_print_str(char **_buf, hashmap_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    hashmap_foreach(node, list) {
        if (node->value == NULL) {
            local_print_manage_str(&buf, "(null)");
        } else {
            local_print_manage_str(&buf, (char *)node->key);
            *buf++ = 61;
            local_print_manage_str(&buf, (char *)node->value);
        }
        if (node->next)
            local_print_manage_str(&buf, ", ");
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
            local_print_manage_str(&buf, "(null)");
        } else {
            local_print_manage_base(&buf, *((int *)node->value), \
            "0123456789", FALSE);
        }
        if (node->next)
            local_print_manage_str(&buf, ", ");
    }
    *buf++ = '}';
    *_buf = buf;
}