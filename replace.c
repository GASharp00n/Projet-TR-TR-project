/*
 * E89 Pedagogical & Technical Lab
 * project: replace.c
 * created on:  2026-01-03 - 17:28 +0100
 * 1st author:  sacha.juillard
 * description: function that checks if the characters match the given input
 * if yes replace those characters by the substitutes
 */

#include "tr.h"

char replace_char(char input, const char *to_replace, const char *substitute)
{
    int  i;

    i = 0;
    while (to_replace[i] != '\0') {
        if (to_replace[i] == input) {
            return substitute[i];
        }
        i += 1;
    }
    return input;
}
