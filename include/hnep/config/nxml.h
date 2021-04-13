/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** header - nxml
*/

#ifndef _HNEP_XML_H
#define _HNEP_XML_H

char *xml_get_balise(char const *xml, char const *balise_name);
char **xml_get_balises(char const *xml, char const *balise_name);
char *xml_get_attribute(char const *balise, char const *attribute_name);
char *xml_get_content(char const *balise);

#endif