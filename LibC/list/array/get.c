/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/get.
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nctype.h>

void *list_get_value(list_t *list, nsize_t index)
{
    nsize_t i = 0;

    list_foreach(node, list) {
        if (i == index)
            return node->value;
        i++;
    }
    return NULL;
}

list_node_t *list_get(list_t *list, nsize_t index)
{
    nsize_t i = 0;

    list_foreach(node, list) {
        if (i == index)
            return node;
        i++;
    }
    return NULL;
}

list_node_t *list_find(list_t *list, void *value)
{
    list_foreach(node, list) {
        if (node->value == value)
            return node;
    }
    return NULL;
}