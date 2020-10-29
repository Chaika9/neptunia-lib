/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - print/error.
*/

void local_print_error(char **buf, const char *err)
{
    while (*err)
        *(*buf)++ = *err++;
}