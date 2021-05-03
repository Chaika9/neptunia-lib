/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** string - string_split
*/

#include <hnep/nstring.h>
#include <nep/nmem.h>

char **string_split(char const *src, char const *str)
{
    char **dest = NULL;
    int size = 1;
    int index, i = 0;

    while (true) {
        dest = nrealloc(dest, sizeof(char *) * size, \
        sizeof(char *) * (size + 1));
        size++;
        if (dest == NULL)
            return NULL;
        dest[i++] = string_copy_at_string_wa(src, str);
        if ((index = string_index_of(src, str)) == -1)
            break;
        src += index + 1;
    }
    dest[i] = NULL;
    return dest;
}