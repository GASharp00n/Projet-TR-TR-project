/*
 * E89 Pedagogical & Technical Lab
 * project: options.c
 * created on:  2026-01-03 - 17:24 +0100
 * 1st author:  sacha.juillard
 * description: functions that check for the options (eg: -d)
 * and the character set (eg: tata)
 */

#include "tr.h"

int has_opt(int argc, char **argv, char opt)
{
    int i;
    int j;

    i = 1;
    while (i < argc) {
        if (argv[i][0] == '-') {
            j = 1;
            while (argv[i][j] != '\0') {
                if (argv[i][j] == opt) {
                    return 1;
                }
                j += 1;
            }
        }
        i += 1;
    }
    return 0;
}


const char *get_set(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc) {
        if (argv[i][0] != '-') {
            return argv[i];
        }
        i += 1;
    }
    return 0;
}

