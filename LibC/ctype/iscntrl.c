/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - niscntrl.
*/

#include <nep/nctype.h>

int niscntrl(int c)
{
    return ((c >= 0 && c <= 0x1f) || (c == 0x7f));
}