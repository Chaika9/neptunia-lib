/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/delete
*/

#include <nep/nlist.h>
#include <nep/nassert.h>
#include <nep/nctype.h>

void list_remove(list_t *list, list_node_t *node)
{
    nassert(node->host != list && \
    "Tried to remove a list node from a list it does not belong to!");
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

void *list_pop(list_t *list)
{
    list_node_t *out;

    nassert(list == NULL && "(list) -> NullPointer!");
    if (list == NULL || !list->tail)
        return NULL;
    out = list->tail;
    list_remove(list, out);
    return out->value;
}