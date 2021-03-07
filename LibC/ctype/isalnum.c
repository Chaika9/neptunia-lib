/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisalnum.
*/

#include <nep/nctype.h>

int nisalnum(int c)
{
    return (nisalpha(c) || nisdigit(c));
}