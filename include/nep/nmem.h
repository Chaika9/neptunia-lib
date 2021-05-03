/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** header - nmem
*/

#ifndef _NEP_MEM_H
#define _NEP_MEM_H

#include <nep/nctype.h>

extern void *ncalloc(nsize_t nmem, nsize_t size);
extern void *nrealloc(void *ptr, nsize_t size, nsize_t new_size);
extern void *nrealloc_unsafe(void *ptr, nsize_t size);

#endif