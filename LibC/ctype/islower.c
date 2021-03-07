/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nislower
*/

#include <nep/nctype.h>

int nislower(int c)
{
    return (c >= 'a' && c <= 'z');
}