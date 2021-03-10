/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** nprintf - bprintf
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nhashmap.h>
#include <nep/nwrite.h>
#include <nep/nva_list.h>
#include <nep/nmem.h>
#include <nep/nctype.h>
#include <stdlib.h>

PRIVATE void init_balises(void)
{
    if (nbprintf_balises)
        return;
    nbprintf_balises = hashmap_create();
    nbprintf_register_balise("char", &l_nbprintf_char);
    nbprintf_register_balise("char *", &l_nbprintf_string);
    nbprintf_register_balise("str", &l_nbprintf_string);
    nbprintf_register_balise("string", &l_nbprintf_string);
    nbprintf_register_balise("int", &l_nbprintf_int);
    nbprintf_register_balise("long", &l_nbprintf_long);
    nbprintf_register_balise("llong", &l_nbprintf_llong);
    nbprintf_register_balise("uchar", &l_nbprintf_ullong);
    nbprintf_register_balise("uint", &l_nbprintf_ullong);
    nbprintf_register_balise("ulong", &l_nbprintf_ullong);
    nbprintf_register_balise("ullong", &l_nbprintf_ullong);
    nbprintf_register_balise("list", &l_nbprintf_list);
    nbprintf_register_balise("hashmap", &l_nbprintf_list);
}

PRIVATE char *get_balise(const char *_c)
{
    const char *c = _c;
    uint64_t start = (uint64_t)&(*c) + 2;
    char *flag;

    c += 2;
    _c += 2;
    while (*c != '}' && *c != 0)
        c++;
    flag = ncalloc(1, (uint64_t)&(*c) - start + 1);
    nmemcpy(flag, _c, (uint64_t)&(*c) - start);
    return flag;
}

nsize_t nbvsprintf(char *buf, char const *format, va_list args)
{
    char *b = buf;
    hashmap_node_t *node;
    char *balise;

    init_balises();
    for (const char *c = format; *c; c++) {
        if (*c == '/' && *(c + 1) == '{') {
            balise = get_balise(c);
            node = hashmap_get(nbprintf_balises, balise);
            if (node) {
                ((void(*)())node->value)(&b, args);
                c += nstrlen(balise) + 2;
            } else {
                *b++ = *c;
            }
            free(balise);
            continue;
        }
        *b++ = *c;
    }
    return 0;
}

void nbprintf_register_balise(char const *balise, void(*func)())
{
    init_balises();
    hashmap_add(nbprintf_balises, balise, func);
}

nsize_t nbprintf(char const *format, ...)
{
    va_list args;
    char *buf = ncalloc(1, NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    va_start(args, format);
    nbvsprintf(buf, format, args);
    va_end(args);
    out = nwrite(1, buf);
    free(buf);
    return out;
}

BPRINTF_REG();