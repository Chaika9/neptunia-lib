/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisspace.
*/

#include <nep/nctype.h>

int nisspace(int c)
{
    return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' \
    || c == ' ');
}