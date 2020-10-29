/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - ntoupper.
*/

int ntoupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return c;
}