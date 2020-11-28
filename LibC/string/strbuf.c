/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** string - nstrbuf.
*/

void nstrbuf(char **buf, const char *str)
{
    if (!str)
        return;
    while (*str)
        *(*buf)++ = *str++;
}