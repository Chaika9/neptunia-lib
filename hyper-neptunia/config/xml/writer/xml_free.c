/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/xml - xml_free
*/

#include <hnep/config/nxml.h>
#include <stdlib.h>

void xml_free_balise(xml_balise_t *balise)
{
    if (balise == NULL)
        return;
    list_foreach(balise->child_nodes, node) {
        xml_free_balise((xml_balise_t *)node->value);
        free(node->value);
    }
    list_free(balise->child_nodes);
    hashmap_foreach(balise->attrs, node) {
        free(node->key);
        free(node->value);
    }
    hashmap_free(balise->attrs);
    if (balise->name != NULL)
        free(balise->name);
    free(balise->content);
}

void xml_free(xml_balise_t *root)
{
    if (root == NULL)
        return;
    xml_free_balise(root);
    free(root);
}