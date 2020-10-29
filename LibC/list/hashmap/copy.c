/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/copy.
*/

#include <nep/nhashmap.h>
#include <nep/nctype.h>

hashmap_t *hashmap_copy(hashmap_t *original)
{
    hashmap_t *out = hashmap_create();
    hashmap_node_t *node = original->head;

    while (node) {
        hashmap_add(out, node->key, node->value);
        node = node->next;
    }
    return out;
}