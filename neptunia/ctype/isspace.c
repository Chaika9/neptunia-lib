/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisspace
*/

#include <nep/nctype.h>

int nisspace(int c)
{
    return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' ||
    c == ' ');
}