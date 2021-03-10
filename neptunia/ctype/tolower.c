/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** ctype - ntolower
*/

int ntolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 'a');
    return c;
}