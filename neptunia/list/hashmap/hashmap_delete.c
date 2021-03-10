/*
** EPITECH PROJECT, 2021
** LibC
** File description:
** list - hashmap/delete
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <nep/nctype.h>

void hashmap_remove(hashmap_t *list, hashmap_node_t *node)
{
    nassert(node->host != list && "Tried to remove a hashmap node from a \
    hashmap it does not belong to!");
    if (node->host != list)
        return;
    if (node == list->head)
        list->head = node->next;
    if (node == list->tail)
        list->tail = node->prev;
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;
    node->prev = NULL;
    node->next = NULL;
    list->length--;
}

void *hashmap_pop(hashmap_t *list)
{
    hashmap_node_t *out;

    nassert(list == NULL && "(list) -> NullPointer!");
    if (list == NULL || !list->tail)
        return NULL;
    out = list->tail;
    hashmap_remove(list, out);
    return out->value;
}