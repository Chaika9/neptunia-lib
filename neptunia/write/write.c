/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** write
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <unistd.h>

nsize_t nwrite(int fd, const char *buf)
{
    return (write(fd, buf, nstrlen(buf)));
}