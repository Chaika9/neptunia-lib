/*
** EPITECH PROJECT, 2021
** hyper-neptunia
** File description:
** config/json -
*/

#include <hnep/nstring.h>
#include <nep/nstring.h>
#include <stdlib.h>

char *json_get_object(char const *json, char const *object_name)
{
    char *fobject = string_format("\"%s\":.*{", object_name);
    char *object = string_matches(json, fobject);

    free(fobject);
    return object;
}

char *json_get_value(char const *object, char const *value_name)
{
    char *fvalue, *value;

    if (object == NULL)
        return NULL;
    fvalue = string_format("\"%s\":.*\"", value_name);
    value = string_matches(object, fvalue);
    free(fvalue);
    if (value == NULL)
        return NULL;
    value += string_index_of(value, ":");
    value += string_index_of(value, "\"") + 1;
    value = string_copy_at_string_wa(value, "\"");
    return value;
}

/*char **json_get_array(char const *object, char const *array_name)
{
    char *farray_obj, *array_obj;
    char *farray, *array;

    farray_obj = string_format("\"%s\":.*[", array_name);
    array_obj = string_matches(object, farray_obj);
    free(farray_obj);
    if (array_obj == NULL)
        return NULL;
    array = string_matches(array_obj, "{.*},");
    return NULL;
}*/