/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nisdigit.
*/

int nisdigit(int c)
{
    return (c >= '0' && c <= '9');
}