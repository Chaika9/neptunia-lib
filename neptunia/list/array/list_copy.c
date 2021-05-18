/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/copy
*/

#include <nep/nlist.h>
#include <nep/nassert.h>

list_t *list_copy(list_t *original)
{
    list_t *out = NULL;

    nassert(original == NULL && "[original] -> NullPointer!");
    if (original == NULL)
        return NULL;
    if ((out = list_create()) == NULL)
        return NULL;
    list_foreach(original, node)
        list_add(out, node->value);
    return out;
}