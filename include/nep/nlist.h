/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** header - list
*/

#ifndef _NEP_LIST_H
#define _NEP_LIST_H

#include <nep/nctype.h>

typedef struct list_node {
    struct list_node *next;
    struct list_node *prev;
    void *value;
    void *host;
} list_node_t;

typedef struct list_s {
    list_node_t *head;
    list_node_t *tail;
    nsize_t length;
    void (*print)(char **, struct list_s *);
} list_t;

#define list_foreach(list, node) \
    for (list_node_t *node = list->head; node; node = node->next)

extern list_t *list_create(void);

extern void list_clear(list_t *list);
extern void list_free(list_t *list);

extern void list_add_node(list_t *list, list_node_t *node);
extern void list_add_node_before(list_t *list, list_node_t *after, \
list_node_t *node);

extern list_node_t *list_add(list_t *list, void *value);
extern list_node_t *list_add_before(list_t * list, list_node_t *after, \
void *value);

extern void *list_get_value(list_t *list, nsize_t index);
extern list_node_t *list_get(list_t *list, nsize_t index);
extern list_node_t *list_find(list_t *list, void *value);

extern list_t *list_copy(list_t *original);

extern void list_remove(list_t *list, list_node_t *node);
extern void *list_pop(list_t *list);

extern char **list_to_table(list_t *list);

extern void list_sort(list_t *list, int(*cmp)());

extern int list_cmp_str(list_node_t *n1, list_node_t *n2);
extern int list_cmp_int(list_node_t *n1, list_node_t *n2);

extern void list_print_str(char **_buf, list_t *list);
extern void list_print_int(char **_buf, list_t *list);

#endif