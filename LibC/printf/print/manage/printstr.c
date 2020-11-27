/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - manage print/str.
*/

void local_print_manage_str(char **buf, const char *str)
{
    while (*str)
        *(*buf)++ = *str++;
}