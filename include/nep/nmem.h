/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** header - nmem
*/

#pragma once

#include <nep/nctype.h>

extern void *ncalloc(nsize_t nmem, nsize_t size);
extern void *nrealloc(void *ptr, nsize_t size);
