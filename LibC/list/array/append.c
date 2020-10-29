/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/append.
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <nep/nctype.h>
#include <stdlib.h>

void list_append(list_t *list, list_node_t *node)
{
    nassert(!(node->next || node->prev) && "Node is already in a list!");
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

list_node_t *list_add(list_t *list, void *value)
{
    list_node_t *node = malloc(sizeof(list_node_t));

    nmemset((u8 *)node, 0, sizeof(list_node_t));
    node->value = value;
    list_append(list, node);
    return node;
}

void list_append_before(list_t *list, list_node_t *after, list_node_t *node)
{
    nassert(!(node->next || node->prev) && "Node is already in a list!");
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

list_node_t *list_add_before(list_t * list, list_node_t *after, void *value)
{
    list_node_t *node = malloc(sizeof(list_node_t));

    nmemset((u8 *)node, 0, sizeof(list_node_t));
    node->value = value;
    list_append_before(list, after, node);
    return node;
}