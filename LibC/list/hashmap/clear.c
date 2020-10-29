/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/delete.
*/

#include <nep/nhashmap.h>
#include <nep/nctype.h>
#include <stdlib.h>

void hashmap_clear(hashmap_t *list)
{
    hashmap_node_t *node = list->head;
    hashmap_node_t *next;

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
    hashmap_clear(list);
    free(list);
}