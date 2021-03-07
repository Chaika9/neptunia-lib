/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/print
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nprintf.h>

PRIVATE void print_key(char **_buf, char const *key)
{
    char *buf = *_buf;

    nstrbuf(&buf, "\"");
    nstrbuf(&buf, key);
    nstrbuf(&buf, "\":");
    *_buf = buf;
}

void hashmap_print_str(char **_buf, hashmap_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    hashmap_foreach(list, node) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            print_key(&buf, (char *)node->key);
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

void hashmap_print_int(char **_buf, hashmap_t *list)
{
    char *buf = *_buf;

    *buf++ = '{';
    hashmap_foreach(list, node) {
        if (node->value == NULL) {
            nstrbuf(&buf, "(null)");
        } else {
            print_key(&buf, (char *)node->key);
            nullbuf(&buf, *((int *)node->value), "0123456789");
        }
        if (node->next)
            nstrbuf(&buf, ", ");
    }
    *buf++ = '}';
    *_buf = buf;
}