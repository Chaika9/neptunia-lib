/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - list_to_table
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

char **list_to_table(list_t *list)
{
    char **table;
    nsize_t index = 0;

    if (list == NULL)
        return NULL;
    table = ncalloc(list->length + 1, sizeof(char *));
    list_foreach(list, node)
        table[index++] = nstrdup((char *)node->value);
    table[index] = NULL;
    return table;
}