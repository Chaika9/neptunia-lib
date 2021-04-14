/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap/list
*/

#include <nep/nhashmap.h>
#include <nep/nlist.h>
#include <nep/nassert.h>

list_t *hashmap_to_list(hashmap_t *list)
{
    list_t *copylist;

    nassert(list == NULL && "[list] -> NullPointer!");
    if (list == NULL)
        return NULL;
    copylist = list_create();
    hashmap_foreach(list, node)
        list_add(copylist, node->value);
    return copylist;
}