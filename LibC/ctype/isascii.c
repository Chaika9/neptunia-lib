/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisascii
*/

#include <nep/nctype.h>

int nisascii(int c)
{
    return (c <= 0x7f);
}