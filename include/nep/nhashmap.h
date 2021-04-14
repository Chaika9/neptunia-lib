/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** header - hashmap
*/

#ifndef _NEP_HASHMAP_H
#define _NEP_HASHMAP_H

#include <nep/nctype.h>
#include <nep/nlist.h>

typedef struct hashmap_node {
    struct hashmap_node *next;
    struct hashmap_node *prev;
    char *key;
    uint hash;
    void *value;
    void *host;
} hashmap_node_t;

typedef struct hashmap_s {
    hashmap_node_t *head;
    hashmap_node_t *tail;
    nsize_t length;
    void (*print)(char **, struct hashmap_s *);
} hashmap_t;

#define hashmap_foreach(list, node) \
    for (hashmap_node_t *node = (list)->head; node; node = node->next)

extern hashmap_t *hashmap_create(void);

extern uint64_t l_hashmap_hash(char const *key);

extern void hashmap_clear(hashmap_t *list);
extern void hashmap_free(hashmap_t *list);

extern void hashmap_add_node(hashmap_t *list, hashmap_node_t *node);
extern void hashmap_add_node_before(hashmap_t *list, hashmap_node_t *after, \
hashmap_node_t *node);

extern hashmap_node_t *hashmap_add(hashmap_t *list, char const *key, \
void *value);
extern hashmap_node_t *hashmap_add_before(hashmap_t *list, \
hashmap_node_t *after, char const *key, void *value);

extern void *hashmap_get_value(hashmap_t *list, char const *key);
extern hashmap_node_t *hashmap_get(hashmap_t *list, char const *key);
extern hashmap_node_t *hashmap_find(hashmap_t *list, void *value);

extern hashmap_t *hashmap_copy(hashmap_t *original);

extern void hashmap_remove(hashmap_t *list, hashmap_node_t *node);
extern void *hashmap_pop(hashmap_t *list);

extern list_t *hashmap_to_list(hashmap_t *list);
extern char **hashmap_to_table(hashmap_t *list);

extern void hashmap_sort(hashmap_t *list, int(*cmp)());

extern int hashmap_cmp_str(hashmap_node_t *n1, hashmap_node_t *n2);
extern int hashmap_cmp_int(hashmap_node_t *n1, hashmap_node_t *n2);

extern void hashmap_print_str(char **_buf, hashmap_t *list);

#endif