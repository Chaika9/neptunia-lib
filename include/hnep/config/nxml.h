/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** header - nxml
*/

#ifndef _HNEP_XML_H
#define _HNEP_XML_H

#include <nep/nlist.h>
#include <nep/nhashmap.h>

typedef struct xml_balise_s {
    char *name;
    hashmap_t *attrs;
    list_t *child_nodes;
    char *content;
} xml_balise_t;

char *xml_get_balise(char const *xml, char const *balise_name);
char **xml_get_balises(char const *xml, char const *balise_name);
char *xml_get_attribute(char const *balise, char const *attribute_name);
char *xml_get_content(char const *balise);

xml_balise_t *xml_add_balise(xml_balise_t *parent, char const *name);
void xml_add_attribute(xml_balise_t *balise, char const *name, \
char const *value);
void xml_set_content(xml_balise_t *balise, char const *content);

void xml_serialize_balise(char **xml, xml_balise_t *balise);
char *xml_serialize(xml_balise_t *root);

void xml_free_balise(xml_balise_t *balise);
void xml_free(xml_balise_t *root);

#endif