/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstr_isalpha.
*/

#include <nep/nctype.h>

boolean nstr_isalpha(char *str)
{
    while (*str) {
        if (!nisalpha(*str++))
            return FALSE;
    }
    return TRUE;
}