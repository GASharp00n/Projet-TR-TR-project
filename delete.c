/*
 * E89 Pedagogical & Technical Lab
 * project: delete.c
 * created on:  2026-01-03 - 17:19 +0100
 * 1st author:  sacha.juillard
 * description: implements the delete mode of the tr program by removing
 * characters found in a given set from standard input
 */
#include <unistd.h>
#include "tr.h"

int buffer_filter(char *out, const char *in,
                         int n, const char *set)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < n) {
        if (!stu_char_in_set(in[i], set)) {
            out[j] = in[i];
            j += 1;
        }
        i += 1;
    }
    return j;
}

void delete_chars(const char *to_delete)
{
    char buffer[100];
    char out[100];
    int  n;
    int  out_len;

    n = read(0, buffer, 100);
    while (n > 0) {
        out_len = buffer_filter(out, buffer, n, to_delete);
        if (out_len > 0) {
            write(1, out, out_len);
        }
        n = read(0, buffer, 100);
    }
}
