/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/copy
*/

#include <nep/nhashmap.h>
#include <nep/nassert.h>

hashmap_t *hashmap_copy(hashmap_t *original)
{
    hashmap_t *out;

    nassert(original == NULL && "[original] -> NullPointer!");
    if (original == NULL)
        return NULL;
    out = hashmap_create();
    hashmap_foreach(original, node)
        hashmap_add(out, node->key, node->value);
    return out;
}