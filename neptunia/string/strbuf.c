/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrbuf.
*/

void nstrbuf(char **buf, char const *str)
{
    if (!str)
        return;
    while (*str)
        *(*buf)++ = *str++;
}