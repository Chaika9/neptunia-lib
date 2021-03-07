/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/add
*/

#include <nep/nlist.h>
#include <nep/nassert.h>
#include <nep/nmem.h>
#include <stdlib.h>

void list_add_node(list_t *list, list_node_t *node)
{
    nassert((list == NULL || node == NULL) && "[list, node] -> NullPointer!");
    if (list == NULL || node == NULL)
        return;
    node->host = list;
    list->length++;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return;
    }
    node->next = NULL;
    list->tail->next = node;
    node->prev = list->tail;
    list->tail = node;
}

void list_add_node_before(list_t *list, list_node_t *after, list_node_t *node)
{
    nassert((list == NULL || node == NULL) && "[list, node] -> NullPointer!");
    if (list == NULL || node == NULL)
        return;
    node->host = list;
    list->length++;
    if (after == NULL) {
        node->prev = NULL;
        node->next = list->head;
        list->head = node;
        return;
    }
    after->prev->next = node;
    after->prev = node;
    node->next = after;
}

list_node_t *list_add(list_t *list, void *value)
{
    list_node_t *node;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return NULL;
    node = ncalloc(1, sizeof(list_node_t));
    node->value = value;
    list_add_node(list, node);
    return node;
}

list_node_t *list_add_before(list_t *list, list_node_t *after, void *value)
{
    list_node_t *node;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return NULL;
    node = ncalloc(1, sizeof(list_node_t));
    node->value = value;
    list_add_node_before(list, after, node);
    return node;
}