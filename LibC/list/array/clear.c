/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/clear.
*/

#include <nep/nlist.h>
#include <nep/nctype.h>
#include <stdlib.h>

void list_clear(list_t *list)
{
    list_node_t *node = list->head;
    list_node_t *next;

    while (node) {
        next = node->next;
        free(node);
        node = next;
    }
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
}

void list_free(list_t *list)
{
    list_clear(list);
    free(list);
}