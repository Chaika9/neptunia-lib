/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/clear
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nassert.h>

#include <stdio.h>

void list_sort(list_t *list, int(*cmp)())
{
    list_node_t *node;

    nassert((list == NULL || cmp == NULL) && "(list, cmp) -> NullPointer!");
    if (list == NULL || cmp == NULL)
        return;
    node = list->head;
    while (node) {
        if (cmp(node, node->prev)) {
            SWAP(node->value, node->prev->value);
            node = list->head;
        }
        node = node->next;
    }
}

int list_cmp_str(list_node_t *n1, list_node_t *n2)
{
    if (n2 == NULL || n1 == NULL)
        return 0;
    if (nstrcmp((char *)n1->value, (char *)n2->value) >= 0)
        return 0;
    return 1;
}

int list_cmp_int(list_node_t *n1, list_node_t *n2)
{
    if (n2 == NULL || n1 == NULL)
        return 0;
    if (*((int *)n1->value) > *((int *)n2->value))
        return 0;
    return 1;
}