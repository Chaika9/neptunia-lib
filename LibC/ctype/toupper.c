/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - ntoupper
*/

int ntoupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return c;
}