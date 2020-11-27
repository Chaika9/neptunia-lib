/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/clear.
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nctype.h>

void hashmap_sort(hashmap_t *list, int(*cmp)())
{
    hashmap_node_t *node = list->head;
    void *tmp;

    while (node) {
        if (cmp(node, node->prev)) {
            tmp = node->value;
            node->value = node->prev->value;
            node->prev->value = tmp;
            node = list->head;
        }
        node = node->next;
    }
}

int hashmap_cmp_str(hashmap_node_t *n1, hashmap_node_t *n2)
{
    if (n2 == NULL)
        return 0;
    if (nstrcmp((char *)n1->value, (char *)n2->value) >= 0)
        return 0;
    return 1;
}

int hashmap_cmp_int(hashmap_node_t *n1, hashmap_node_t *n2)
{
    if (n2 == NULL)
        return 0;
    if (*((int *)n1->value) > *((int *)n2->value))
        return 0;
    return 1;
}