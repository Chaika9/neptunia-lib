/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_table_free
*/

#include <nep/nctype.h>
#include <stdlib.h>

void string_table_free(char **table)
{
    if (table == NULL)
        return;
    for (int i = 0; table[i]; i++)
        free(table);
    free(table);
}