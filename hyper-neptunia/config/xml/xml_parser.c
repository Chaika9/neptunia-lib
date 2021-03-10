/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/xml -
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <stdlib.h>

#include <stdio.h>

char *xml_get_balise(char const *xml, char const *balise_name)
{
    char *bfname = string_create("<");
    char *ptr;

    bfname = string_concat_wa(bfname, balise_name);
    bfname = string_concat_wa(bfname, ".*>");
    ptr = string_matches(xml, bfname);
    free(bfname);
    return ptr;
}

char **xml_get_balises(char const *xml, char const *balise_name)
{
    char *bfname = string_create("<");
    char **ptrs;

    bfname = string_concat_wa(bfname, balise_name);
    bfname = string_concat_wa(bfname, ".*>");
    ptrs = string_matches_to_table(xml, bfname);
    free(bfname);
    return ptrs;
}

char *xml_get_value(char const *balise_ptr, char const *value_name)
{
    char *vfname, *ptr, *value;

    if (balise_ptr == NULL)
        return NULL;
    vfname = string_create(value_name);
    vfname = string_concat_wa(vfname, "=\"");
    ptr = string_matches(balise_ptr, vfname);
    if (ptr == NULL) {
        free(vfname);
        return NULL;
    }
    ptr += nstrlen(value_name) + 2;
    value = string_copy_at_string_wa(ptr, "\"");
    free(vfname);
    return value;
}

char *xml_get_data(char const *balise_ptr)
{
    char *ptr;

    if (balise_ptr == NULL)
        return NULL;
    ptr = string_matches(balise_ptr, ">") + 1;
    if (ptr == NULL)
        return NULL;
    return (string_copy_at_string_wa(ptr, "</"));
}