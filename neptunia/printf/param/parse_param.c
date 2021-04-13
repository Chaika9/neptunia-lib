/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - param parser.
*/

#include <nep/nprintf.h>
#include <nep/nmath.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

PRIVATE void parse_param_alt(const char **ch, nprintf_param_t *p)
{
    p->alt = false;
    if (**ch == '#') {
        p->alt = true;
        *ch += 1;
    }
}

void l_parse_param(const char **ch, nprintf_param_t *p)
{
    parse_param_alt(ch, p);
    l_parse_param_sign(ch, p);
    l_parse_param_wight(ch, p);
    l_parse_param_precision(ch, p);
    l_parse_param_big(ch, p);
}