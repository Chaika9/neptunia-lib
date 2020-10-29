/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/append.
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <nep/nctype.h>
#include <stdlib.h>

void hashmap_append(hashmap_t *list, hashmap_node_t *node)
{
    nassert(!(node->next || node->prev) && "Node is already in a hashmap!");
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

hashmap_node_t *hashmap_add(hashmap_t *list, const char *key, void *value)
{
    hashmap_node_t *node = malloc(sizeof(hashmap_node_t));

    nmemset((u8 *)node, 0, sizeof(hashmap_node_t));
    node->key = key;
    node->hash = local_hashmap_str_hash(key);
    node->value = value;
    hashmap_append(list, node);
    return node;
}

void hashmap_append_before(hashmap_t *list, hashmap_node_t *after, \
hashmap_node_t *node)
{
    nassert(!(node->next || node->prev) && "Node is already in a hashmap!");
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

hashmap_node_t *hashmap_add_before(hashmap_t *list, hashmap_node_t *after, \
const char *key, void *value)
{
    hashmap_node_t *node = malloc(sizeof(hashmap_node_t));

    nmemset((u8 *)node, 0, sizeof(hashmap_node_t));
    node->key = key;
    node->hash = local_hashmap_str_hash(key);
    node->value = value;
    hashmap_append_before(list, after, node);
    return node;
}