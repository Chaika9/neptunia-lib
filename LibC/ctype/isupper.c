/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisupper.
*/

#include <nep/nctype.h>

int nisupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}