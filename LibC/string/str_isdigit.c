/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstr_isdigit.
*/

#include <nep/nctype.h>

boolean nstr_isdigit(char *str)
{
    while (*str) {
        if (!nisdigit(*str++))
            return FALSE;
    }
    return TRUE;
}