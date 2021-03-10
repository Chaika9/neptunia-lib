/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap
*/

#include <nep/nhashmap.h>
#include <nep/nmem.h>

hashmap_t *hashmap_create(void)
{
    hashmap_t *list = ncalloc(1, sizeof(hashmap_t));

    return list;
}