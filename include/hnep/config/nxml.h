/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** header - string
*/

#pragma once

char *xml_get_balise(char const *xml, char const *balise_name);
char **xml_get_balises(char const *xml, char const *balise_name);
char *xml_get_value(char const *balise_ptr, char const *value_name);
char *xml_get_data(char const *balise_ptr);