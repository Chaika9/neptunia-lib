/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/clear
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nassert.h>
#include <nep/nctype.h>

void hashmap_sort(hashmap_t *list, int(*cmp)())
{
    hashmap_node_t *node;

    nassert((list == NULL || cmp == NULL) && "(list, cmp) -> NullPointer!");
    if (list == NULL || cmp == NULL)
        return;
    node = list->head;
    while (node) {
        if (cmp(node, node->prev)) {
            SWAP(node->key, node->prev->key);
            SWAP(node->hash, node->prev->hash);
            SWAP(node->value, node->prev->value);
            node = list->head;
        }
        node = node->next;
    }
}

int hashmap_cmp_str(hashmap_node_t *n1, hashmap_node_t *n2)
{
    if (n2 == NULL || n1 == NULL)
        return 0;
    if (nstrcmp((char *)n1->value, (char *)n2->value) >= 0)
        return 0;
    return 1;
}

int hashmap_cmp_int(hashmap_node_t *n1, hashmap_node_t *n2)
{
    if (n2 == NULL || n1 == NULL)
        return 0;
    if (*((int *)n1->value) > *((int *)n2->value))
        return 0;
    return 1;
}