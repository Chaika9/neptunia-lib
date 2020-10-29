/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/copy.
*/

#include <nep/nlist.h>
#include <nep/nctype.h>

list_t *list_copy(list_t *original)
{
    list_t *out = list_create();
    list_node_t *node = original->head;

    while (node) {
        list_add(out, node->value);
        node = node->next;
    }
    return out;
}