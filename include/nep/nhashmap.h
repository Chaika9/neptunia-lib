/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - hashmap
*/

#pragma once

#include <nep/nctype.h>
#include <nep/nlist.h>

#ifndef	__NEP_HASHMAP_H
#define	__NEP_HASHMAP_H

typedef struct hashmap_node {
    struct hashmap_node *next;
    struct hashmap_node *prev;
    const char *key;
    uint hash;
    void *value;
    void *host;
} hashmap_node_t;

typedef struct hashmap {
    hashmap_node_t *head;
    hashmap_node_t *tail;
    nsize_t length;
    void (*print)(char **, struct hashmap *);
} hashmap_t;

#define hashmap_foreach(node, list) \
    for (hashmap_node_t *node = (list)->head; node != NULL; node = node->next)

extern hashmap_t *hashmap_create(void);

extern uint local_hashmap_str_hash(const char *key);

extern void hashmap_clear(hashmap_t *list);
extern void hashmap_free(hashmap_t *list);

extern void hashmap_append(hashmap_t *list, hashmap_node_t *node);
extern hashmap_node_t *hashmap_add(hashmap_t *list, const char *key, \
void *value);
extern void hashmap_append_before(hashmap_t *list, hashmap_node_t *after, \
hashmap_node_t *node);
extern hashmap_node_t *hashmap_add_before(hashmap_t *list, \
hashmap_node_t *after, const char *key, void *value);

extern hashmap_node_t *hashmap_get(hashmap_t *list, const char *key);
extern hashmap_node_t *hashmap_find(hashmap_t *list, void *value);

extern hashmap_t *hashmap_copy(hashmap_t *original);

extern void hashmap_remove(hashmap_t *list, hashmap_node_t *node);
extern void *hashmap_pop(hashmap_t *list);

extern list_t *hashmap_tolist(hashmap_t *list);

extern void hashmap_sort(hashmap_t *list, int(*cmp)());

extern int hashmap_cmp_str(hashmap_node_t *n1, hashmap_node_t *n2);
extern int hashmap_cmp_int(hashmap_node_t *n1, hashmap_node_t *n2);

extern void hashmap_print_str(char **_buf, hashmap_t *list);

#endif