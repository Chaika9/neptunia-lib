/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - bprintf.
*/

#include <nep/nprintf.h>
#include <nep/nstring.h>
#include <nep/nhashmap.h>
#include <nep/nwrite.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>
#include <stdlib.h>

PRIVATE hashmap_t *flags = NULL;

PRIVATE void init_flags(void)
{
    if (flags)
        return;
    flags = hashmap_create();
    nbprintf_register_flag("char", &local_nbprintf_char);
    nbprintf_register_flag("str", &local_nbprintf_string);
    nbprintf_register_flag("int", &local_nbprintf_int);
    nbprintf_register_flag("long", &local_nbprintf_long);
    nbprintf_register_flag("llong", &local_nbprintf_llong);
    nbprintf_register_flag("uchar", &local_nbprintf_ullong);
    nbprintf_register_flag("uint", &local_nbprintf_ullong);
    nbprintf_register_flag("ulong", &local_nbprintf_ullong);
    nbprintf_register_flag("ullong", &local_nbprintf_ullong);
    nbprintf_register_flag("list", &local_nbprintf_list);
}

PRIVATE char *get_flag(const char *_c)
{
    const char *c = _c;
    uint64_t start = (uint64_t)&(*c) + 2;
    char *flag;

    c += 2;
    _c += 2;
    while (*c != '}' && *c != 0)
        c++;
    flag = malloc((uint64_t)&(*c) - start);
    nmemset(flag, 0, (uint64_t)&(*c) - start);
    nmemcpy(flag, _c, (uint64_t)&(*c) - start);
    return flag;
}

nsize_t nbvsprintf(char *buf, const char *format, va_list args)
{
    char *b = buf;
    hashmap_node_t *node;
    char *flag;

    init_flags();
    for (const char *c = format; *c; c++) {
        if (*c == '/' && *(c + 1) == '{') {
            flag = get_flag(c);
            node = hashmap_get(flags, flag);
            if (node) {
                ((void(*)())node->value)(&b, args);
                c += nstrlen(flag) + 2;
            } else {
                *b++ = *c;
            }
            free(flag);
            continue;
        }
        *b++ = *c;
    }
    return 0;
}

void nbprintf_register_flag(const char *flag, void(*func)())
{
    init_flags();
    hashmap_add(flags, flag, func);
}

nsize_t nbprintf(const char *format, ...)
{
    va_list args;
    char *buf = malloc(NPRINTF_BUFFER_SIZE);
    nsize_t out = 0;

    nmemset(buf, 0, NPRINTF_BUFFER_SIZE);
    va_start(args, format);
    nbvsprintf(buf, format, args);
    va_end(args);
    out = nwrite(1, buf);
    free(buf);
    return out;
}
