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
    hashmap_t *out = NULL;

    nassert(original == NULL && "[original] -> NullPointer!");
    if (original == NULL)
        return NULL;
    if ((out = hashmap_create() == NULL))
        return NULL;
    hashmap_foreach(original, node)
        hashmap_add(out, node->key, node->value);
    return out;
}