/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** mem - ncalloc
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <stdlib.h>

void *ncalloc(nsize_t nmem, nsize_t size)
{
    void *ptr = malloc(size * nmem);

    if (ptr)
        nmemset(ptr, 0, size * nmem);
    return ptr;
}