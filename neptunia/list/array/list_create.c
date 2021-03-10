/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** list - array/list
*/

#include <nep/nlist.h>
#include <nep/nmem.h>

list_t *list_create(void)
{
    list_t *list = ncalloc(1, sizeof(list_t));

    return list;
}