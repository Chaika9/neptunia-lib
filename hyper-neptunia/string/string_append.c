/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_concat, string_concat_wa
*/

#include <nep/nstring.h>
#include <nep/nmem.h>

char *string_append(char *dest, char ch)
{
    nsize_t dest_len = 0;

    if (dest != NULL)
        dest_len = nstrlen(dest);
    dest = nrealloc(dest, dest_len, dest_len + 2);
    if (dest == NULL)
        return NULL;
    nmemcpy(dest + dest_len, &ch, 1);
    return dest;
}