/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** mem - nrealloc
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <nep/nmem.h>
#include <stdlib.h>

void *nrealloc(void *ptr, nsize_t size, nsize_t new_size)
{
    void *newmem;

    if (!new_size) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return (ncalloc(1, new_size));
    newmem = ncalloc(1, new_size);
    if (newmem == NULL)
        return NULL;
    nmemcpy(newmem, ptr, size);
    free(ptr);
    return newmem;
}

void *nrealloc_unsafe(void *ptr, nsize_t size)
{
    void *newmem;

    if (!size) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return (ncalloc(1, size));
    newmem = ncalloc(1, size);
    if (newmem == NULL)
        return NULL;
    nmemcpy(newmem, ptr, size);
    free(ptr);
    return newmem;
}