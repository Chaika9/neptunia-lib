/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/xml - xml_serialize
*/

#include <hnep/config/nxml.h>
#include <hnep/nstring.h>
#include <stdlib.h>

PRIVATE void xml_serialize_content(char **xml, xml_balise_t *balise)
{
    char *end;

    if (balise->content != NULL) {
        *xml = string_concat_wa(*xml, ">");
        *xml = string_concat_wa(*xml, balise->content);
        end = string_format("</%s>\n", balise->name);
        *xml = string_concat_wa(*xml, end);
        free(end);
    } else {
        *xml = string_concat_wa(*xml, " />\n");
    }
}

PRIVATE void xml_serialize_attrs(char **xml, xml_balise_t *balise)
{
    char *attr;

    hashmap_foreach(balise->attrs, node) {
        attr = string_format(" %s=\"%s\"", node->key, (char *)node->value);
        *xml = string_concat_wa(*xml, attr);
        free(attr);
    }
}

PRIVATE void xml_serialize_childs(char **xml, xml_balise_t *balise)
{
    list_foreach(balise->child_nodes, node)
        xml_serialize_balise(xml, (xml_balise_t *)node->value);
}

void xml_serialize_balise(char **xml, xml_balise_t *balise)
{
    char *end;

    if (balise->name == NULL) {
        xml_serialize_childs(xml, balise);
        return;
    }
    *xml = string_concat_wa(*xml, "<");
    *xml = string_concat_wa(*xml, balise->name);
    xml_serialize_attrs(xml, balise);
    if (!balise->child_nodes->length) {
        xml_serialize_content(xml, balise);
        return;
    }
    *xml = string_concat_wa(*xml, ">\n");
    xml_serialize_childs(xml, balise);
    end = string_format("</%s>\n", balise->name);
    *xml = string_concat_wa(*xml, end);
    free(end);
}

char *xml_serialize(xml_balise_t *root)
{
    char *xml = NULL;

    if (root == NULL)
        return NULL;
    xml_serialize_balise(&xml, root);
    return xml;
}