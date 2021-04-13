/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - va_list
*/

#ifndef _NEP_VA_LIST_H
#define _NEP_VA_LIST_H

#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST
#endif

#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_end(ap) __builtin_va_end(ap)
#define va_arg(ap, type) __builtin_va_arg(ap, type)

#endif