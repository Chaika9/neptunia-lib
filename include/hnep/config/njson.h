/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** header - njson
*/

#ifndef _HNEP_JSON_H
#define _HNEP_JSON_H

char *json_get_object(char const *json, char const *object_name);
char *json_get_value(char const *object, char const *value_name);
char **json_get_array(char const *object, char const *array_name);

#endif