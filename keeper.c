/*
 * E89 Pedagogical & Technical Lab
 * project: keeper.c
 * created on:  2026-01-03 - 17:21 +0100
 * 1st author:  sacha.juillard
 * description: function that keeps characters that are in given set and
 * removes all the others that arent (opposite of the delete function)
 */

#include <unistd.h>
#include "tr.h"

int stu_char_in_set(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i] != '\0') {
        if (set[i] == c) {
            return 1;
        }
        i += 1;
    }
    return 0;
}

void conserve_chars(const char *set)
{
    char buffer[100];
    ssize_t n;
    int i;

    if (!set) {
        return;
    }
    while ((n = read(0, buffer, 100)) > 0) {
        i = 0;
        while (i < n) {
            if (buffer[i] == '\n' || stu_char_in_set(buffer[i], set)) {
                write(1, &buffer[i], 1);
            }
            i += 1;
        }
    }
}
