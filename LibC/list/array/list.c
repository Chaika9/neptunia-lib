/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** list - array/list.
*/

#include <nep/nlist.h>
#include <nep/nstring.h>
#include <nep/nctype.h>
#include <stdlib.h>

list_t *list_create(void)
{
    list_t *list = malloc(sizeof(list_t));

    nmemset((u8 *)list, 0, sizeof(list_t));
    return list;
}