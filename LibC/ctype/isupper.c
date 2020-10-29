/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisupper.
*/

#include <nep/nctype.h>

int nisupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}