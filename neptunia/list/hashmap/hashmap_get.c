/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/get
*/

#include <nep/nhashmap.h>
#include <nep/nassert.h>

hashmap_node_t *hashmap_get(hashmap_t *list, char const *key)
{
    uint hash = l_hashmap_hash(key);

    nassert(list == NULL && "(list) -> NullPointer!");
    if (list == NULL)
        return NULL;
    hashmap_foreach(list, node) {
        if (node->hash == hash)
            return node;
    }
    return NULL;
}

void *hashmap_get_value(hashmap_t *list, char const *key)
{
    hashmap_node_t *node = hashmap_get(list, key);

    if (node != NULL)
        return node->value;
    return NULL;
}

hashmap_node_t *hashmap_find(hashmap_t *list, void *value)
{
    nassert((list == NULL || value == NULL) && \
    "(list, value) -> NullPointer!");
    if (list == NULL || value == NULL)
        return NULL;
    hashmap_foreach(list, node) {
        if (node->value == value)
            return node;
    }
    return NULL;
}