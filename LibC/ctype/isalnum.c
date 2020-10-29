/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisalnum.
*/

#include <nep/nctype.h>

int nisalnum(int c)
{
    return (nisalpha(c) || nisdigit(c));
}