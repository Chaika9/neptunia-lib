/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - hashmap_to_table
*/

#include <nep/nhashmap.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

char **hashmap_to_table(hashmap_t *list)
{
    char **table;
    nsize_t index = 0;

    if (list == NULL)
        return NULL;
    table = ncalloc(list->length + 1, sizeof(char *));
    hashmap_foreach(list, node)
        table[index++] = nstrdup((char *)node->value);
    table[index] = NULL;
    return table;
}