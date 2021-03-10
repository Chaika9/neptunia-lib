/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/xml - xml_get_balise, xml_get_balises,
** xml_get_value, xml_get_data
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <stdlib.h>

char *xml_get_balise(char const *xml, char const *balise_name)
{
    char *fbalise = string_format("<%s.*>", balise_name);
    char *balise = string_matches(xml, fbalise);

    free(fbalise);
    return balise;
}

char **xml_get_balises(char const *xml, char const *balise_name)
{
    char *fbalise = string_format("<%s.*>", balise_name);
    char **balises = string_matches_to_table(xml, fbalise);

    free(fbalise);
    return balises;
}

char *xml_get_attribute(char const *balise, char const *attribute_name)
{
    char *fattribute, *attribute;

    if (balise == NULL)
        return NULL;
    fattribute = string_format("%s=\"", attribute_name);
    attribute = string_matches(balise, fattribute);
    free(fattribute);
    if (attribute == NULL)
        return NULL;
    attribute += string_index_of(attribute, "\"") + 1;
    attribute = string_copy_at_string_wa(attribute, "\"");
    return attribute;
}

char *xml_get_content(char const *balise)
{
    char *ptr;

    if (balise == NULL)
        return NULL;
    ptr = string_matches(balise, ">") + 1;
    if (ptr == NULL)
        return NULL;
    return (string_copy_at_string_wa(ptr, "</"));
}