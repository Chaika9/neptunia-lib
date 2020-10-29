/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap.
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nctype.h>
#include <stdlib.h>

hashmap_t *hashmap_create(void)
{
    hashmap_t *list = malloc(sizeof(hashmap_t));

    nmemset((u8 *)list, 0, sizeof(hashmap_t));
    return list;
}