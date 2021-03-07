/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - niscntrl
*/

#include <nep/nctype.h>

int niscntrl(int c)
{
    return ((c >= 0 && c <= 0x1f) || c == 0x7f);
}