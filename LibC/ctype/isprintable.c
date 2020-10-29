/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisprintable.
*/

int nisprintable(int c)
{
    return !(c < 0x20 || c > 0x7e);
}