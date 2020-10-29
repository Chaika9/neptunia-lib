/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisascii.
*/

#include <nep/nctype.h>

int nisascii(int c)
{
    return (c <= 0x7f);
}