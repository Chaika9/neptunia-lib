/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/clear
*/

#include <nep/nlist.h>
#include <nep/nassert.h>
#include <stdlib.h>

void list_clear(list_t *list)
{
    list_node_t *node, *next;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return;
    node = list->head;
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
    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return;
    list_clear(list);
    free(list);
}