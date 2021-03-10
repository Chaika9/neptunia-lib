/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** nprintf - param digits parser.
*/

#include <nep/nprintf.h>
#include <nep/nmath.h>
#include <nep/nva_list.h>
#include <nep/nctype.h>

void l_parse_param_precision(const char **ch, nprintf_param_t *p)
{
    p->precision = 6;
    if (**ch == '.') {
        *ch += 1;
        p->precision = 0;
        while (nisdigit(**ch)) {
            p->precision *= 10;
            p->precision += **ch - '0';
            *ch += 1;
        }
    }
}

void l_parse_param_big(const char **ch, nprintf_param_t *p)
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

void l_parse_param_sign(const char **ch, nprintf_param_t *p)
{
    p->plus = FALSE;
    p->minos = FALSE;
    while (nissign(**ch)) {
        if (**ch == '+') {
            p->plus = TRUE;
        } else if (**ch == '-') {
            p->minos = TRUE;
        }
        *ch += 1;
    }
}

void l_parse_param_wight(const char **ch, nprintf_param_t *p)
{
    p->wight = 0;
    p->w_ch = ' ';
    if (nisspace(**ch))
        *ch += 1;
    if (nisdigit(**ch)) {
        if (**ch == '0')
            p->w_ch = '0';
        if ((*(*ch + 1)) == '+') {
            p->plus = TRUE;
            *ch += 2;
        } else if ((*(*ch + 1)) == '-') {
            p->minos = TRUE;
            *ch += 2;
        }
        while (nisdigit(**ch))
            p->wight = p->wight * 10 + *(*ch)++ - '0';
    }
}