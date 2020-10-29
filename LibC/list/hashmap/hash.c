/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/hash.
*/

#include <nep/nctype.h>

uint local_hashmap_str_hash(const char *key)
{
    uint hash;

    for (hash = 0; *key; key++)
        hash = *key + (hash << 6) + (hash << 16) - hash;
    return hash;
}