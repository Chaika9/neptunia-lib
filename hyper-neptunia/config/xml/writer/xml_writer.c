/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/xml - xml_add_balise, xml_add_attribute,
** xml_set_content
*/

#include <hnep/config/nxml.h>
#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <nep/nmem.h>

xml_balise_t *xml_add_balise(xml_balise_t *parent, char const *name)
{
    xml_balise_t *node;

    if (parent != NULL && parent->content != NULL)
        return NULL;
    node = ncalloc(1, sizeof(xml_balise_t));
    if (node == NULL)
        return NULL;
    node->name = nstrdup(name);
    node->attrs = hashmap_create();
    node->child_nodes = list_create();
    if (parent != NULL)
        list_add(parent->child_nodes, node);
    return node;
}

void xml_add_attribute(xml_balise_t *balise, char const *name, \
char const *value)
{
    if (balise == NULL)
        return;
    hashmap_add(balise->attrs, nstrdup(name), nstrdup(value));
}

void xml_set_content(xml_balise_t *balise, char const *content)
{
    if (balise == NULL || balise->child_nodes->length > 0)
        return;
    balise->content = nstrdup(content);
}