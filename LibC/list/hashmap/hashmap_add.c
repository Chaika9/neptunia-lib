/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/add
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <nep/nmem.h>

void hashmap_add_node(hashmap_t *list, hashmap_node_t *node)
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

void hashmap_add_node_before(hashmap_t *list, hashmap_node_t *after, \
hashmap_node_t *node)
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

hashmap_node_t *hashmap_add(hashmap_t *list, char const *key, void *value)
{
    hashmap_node_t *node;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return NULL;
    node = ncalloc(1, sizeof(hashmap_node_t));
    node->key = (char *)key;
    node->hash = l_hashmap_hash(key);
    node->value = value;
    hashmap_add_node(list, node);
    return node;
}

hashmap_node_t *hashmap_add_before(hashmap_t *list, hashmap_node_t *after, \
char const *key, void *value)
{
    hashmap_node_t *node;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return NULL;
    node = ncalloc(1, sizeof(hashmap_node_t));
    node->key = (char *)key;
    node->hash = l_hashmap_hash(key);
    node->value = value;
    hashmap_add_node_before(list, after, node);
    return node;
}