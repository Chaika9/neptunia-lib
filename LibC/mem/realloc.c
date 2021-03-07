/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** mem - nrealloc
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <stdlib.h>

void *nrealloc(void *ptr, nsize_t size)
{
    void *newmem;

    if (size == 0) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return (malloc(size));
    newmem = malloc(size);
    if (newmem == NULL)
        return NULL;
    nmemcpy(newmem, ptr, size);
    return newmem;
}