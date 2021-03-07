/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisalpha
*/

#include <nep/nctype.h>

int nisalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}