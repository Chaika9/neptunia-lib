/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nislower.
*/

#include <nep/nctype.h>

int nislower(int c)
{
    return (c >= 'a' && c <= 'z');
}