/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - ntolower.
*/

int ntolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 'a');
    return c;
}