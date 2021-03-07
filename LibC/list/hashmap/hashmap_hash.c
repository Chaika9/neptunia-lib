/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/hash.
*/

#include <nep/nctype.h>

uint64_t l_hashmap_hash(char const *key)
{
    uint64_t hash;

    for (hash = 0; *key; key++)
        hash = *key + (hash << 6) + (hash << 16) - hash;
    return hash;
}