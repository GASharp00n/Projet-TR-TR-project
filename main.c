/*
 * E89 Pedagogical & Technical Lab
 * project: main.c
 * created on:  2026-01-03 - 17:23 +0100
 * 1st author:  sacha.juillard
 * description: function that calls all functions if the given arguments
 * match
 */

#include "tr.h"

int main(int argc, char **argv)
{
    const char *set;

    if (has_opt(argc, argv, 'h')) {
        print_help();
        return 0;
    }
    if (has_opt(argc, argv, 'c') && has_opt(argc, argv, 'd')) {
        set = get_set(argc, argv);
        if (!set) {
            return 1;
        }
        conserve_chars(set);
        return 0;
    }
    if (has_opt(argc, argv, 'd')) {
        set = get_set(argc, argv);
        if (!set) {
            return 1;
        }
        delete_chars(set);
        return 0;
    }
    if (argc != 3) {
        return 1;
    }
    translate(argv[1], argv[2]);
    return 0;
}
