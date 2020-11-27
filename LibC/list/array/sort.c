/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/clear.
*/

#include <nep/nlist.h>
#include <nep/nctype.h>

void list_sort(list_t *list, int(*cmp)())
{
    list_node_t *node = list->head;
    void *tmp;

    while (node) {
        if (cmp(node, node->prev)) {
            tmp = node->value;
            node->value = node->prev->value;
            node->prev->value = tmp;
            node = list->head;
        }
        node = node->next;
    }
}