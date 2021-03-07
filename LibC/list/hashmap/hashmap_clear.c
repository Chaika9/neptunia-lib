/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/delete
*/

#include <nep/nhashmap.h>
#include <nep/nassert.h>
#include <stdlib.h>

void hashmap_clear(hashmap_t *list)
{
    hashmap_node_t *node, *next;

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

void hashmap_free(hashmap_t *list)
{
    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return;
    hashmap_clear(list);
    free(list);
}