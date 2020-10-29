/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** header - assert
*/

#pragma once

#ifndef	__NEP_ASSERT_H
#define	__NEP_ASSERT_H

#ifndef NDEBUG

extern void local_assert_func(const char *file, int line, const char *func, \
const char *failedexpr);

#define nassert(statement) ((statement) ? (void)0 : \
local_assert_func(__FILE__, __LINE__, __FUNCTION__, #statement))

#else
#define nassert(statement) ((void)0)
#endif

#endif