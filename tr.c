/*
 * E89 Pedagogical & Technical Lab
 * project: tr.c
 * created on:  2026-01-03 - 17:32 +0100
 * 1st author:  sacha.juillard
 * description: function that replaces characters according to given characters sets
 */

#include <unistd.h>
#include "tr.h"

void translate_buffer(char *buff, int n,
                             const char *from, const char *to)
{
    int i;

    i = 0;
    while (i < n) {
        buff[i] = replace_char(buff[i], from, to);
        i += 1;
    }
}

void translate(const char *from, const char *to)
{
    char buffer[100];
    int  n;

    n = read(0, buffer, 100);
    while (n > 0) {
        translate_buffer(buffer, n, from, to);
        write(1, buffer, n);
        n = read(0, buffer, 100);
    }
}
