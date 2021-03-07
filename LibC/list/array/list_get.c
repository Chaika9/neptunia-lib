/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/get
*/

#include <nep/nlist.h>
#include <nep/nassert.h>

list_node_t *list_get(list_t *list, nsize_t index)
{
    nsize_t i = 0;

    nassert(list == NULL && "(list) -> NullPointer!");
    if (list == NULL)
        return NULL;
    list_foreach(list, node) {
        if (i == index)
            return node;
        i++;
    }
    return NULL;
}

void *list_get_value(list_t *list, nsize_t index)
{
    list_node_t *node = list_get(list, index);

    if (node != NULL)
        return node->value;
    return NULL;
}

list_node_t *list_find(list_t *list, void *value)
{
    nassert((list == NULL || value == NULL) && \
    "(list, value) -> NullPointer!");
    if (list == NULL || value == NULL)
        return NULL;
    list_foreach(list, node) {
        if (node->value == value)
            return node;
    }
    return NULL;
}