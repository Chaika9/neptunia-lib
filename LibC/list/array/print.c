/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/print.
*/

#include <nep/nlist.h>
#include <nep/nprintf.h>

#include <stdio.h>

void list_print_str(char **_buf, list_t *list)
{
    char *buf = *_buf;
    char *str;

    *buf++ = '[';
    list_foreach(node, list) {
        if (node->value == NULL) {
            local_print_manage_str(&buf, "(null)");
        } else {
            str = (char *)node->value;
            while (*str)
                *buf++ = *str++;
        }
        if (node->next)
            local_print_manage_str(&buf, ", ");
    }
    *buf++ = ']';
    *_buf = buf;
}

void list_print_int(char **_buf, list_t *list)
{
    char *buf = *_buf;

    *buf++ = '[';
    list_foreach(node, list) {
        if (node->value == NULL) {
            local_print_manage_str(&buf, "(null)");
        } else {
            local_print_manage_base(&buf, *((int *)node->value), \
            "0123456789", FALSE);
        }
        if (node->next)
            local_print_manage_str(&buf, ", ");
    }
    *buf++ = ']';
    *_buf = buf;
}