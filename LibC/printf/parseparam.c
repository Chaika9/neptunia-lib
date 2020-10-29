/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - param parser.
*/

#include <nep/nprintf.h>
#include <nep/nva_list.h>
#include <nep/nwrite.h>
#include <nep/nmath.h>
#include <nep/nctype.h>

PRIVATE void parse_param_alt(const char **ch, nprintf_param_t *p)
{
    p->alt = FALSE;
    if (**ch == '#') {
        p->alt = TRUE;
        *ch += 1;
    }
}

PRIVATE void parse_param_width(const char **ch, nprintf_param_t *p, \
va_list args)
{
    p->arg_width = 0;
    if (**ch == '.') {
        *ch += 1;
        if (**ch == '*') {
            p->arg_width = va_arg(args, int);
            *ch += 1;
        }
        else  {
            while (nisdigit(**ch)) {
                p->arg_width *= 10;
                p->arg_width += **ch - '0';
                *ch += 1;
            }
        }
    }
}

PRIVATE void parse_param_big(const char **ch, nprintf_param_t *p)
{
    p->big = 0;
    if (**ch == 'l') {
        p->big = 1;
        *ch += 1;
        if (**ch == 'l') {
            p->big = 2;
            *ch += 1;
        }
    }
}

void local_parse_param(const char **ch, nprintf_param_t *p, va_list args)
{
    parse_param_alt(ch, p);
    parse_param_width(ch, p, args);
    parse_param_big(ch, p);
}