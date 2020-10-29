/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** ctype - nswap.
*/

void nswap(char *c1, char *c2)
{
    char c = *c2;

    *c1 = *c2;
    *c2 = c;
}