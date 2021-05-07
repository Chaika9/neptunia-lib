/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** write
*/

#include <nep/nctype.h>
#include <nep/nstring.h>
#include <unistd.h>

nsize_t nwrite(int fd, char const *buf)
{
    return (write(fd, buf, nstrlen(buf)));
}