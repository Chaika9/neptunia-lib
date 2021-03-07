/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - nisprintable
*/

int nisprintable(int c)
{
    return !(c < 0x20 || c > 0x7e);
}