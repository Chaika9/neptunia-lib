/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/get.
*/

#include <nep/nhashmap.h>

hashmap_node_t *hashmap_get(hashmap_t *list, const char *key)
{
    uint hash = local_hashmap_str_hash(key);

    hashmap_foreach(node, list) {
        if (node->hash == hash)
            return node;
    }
    return NULL;
}

hashmap_node_t *hashmap_find(hashmap_t *list, void *value)
{
    hashmap_foreach(node, list) {
        if (node->value == value)
            return node;
    }
    return NULL;
}