/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - hashmap/list.
*/

#include <nep/nhashmap.h>
#include <nep/nlist.h>

list_t *hashmap_tolist(hashmap_t *list)
{
    list_t *arraylist = list_create();

    hashmap_foreach(node, list) {
        list_add(arraylist, node->value);
    }
    return arraylist;
}