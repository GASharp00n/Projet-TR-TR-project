/*
 * E89 Pedagogical & Technical Lab
 * project: helper.c
 * created on:  2026-01-03 - 17:20 +0100
 * 1st author:  sacha.juillard
 * description: function that writes the helper once called
 */

#include <unistd.h>
#include "tr.h"

void print_help()
{
    write(1, "Usage: tr [OPTION] SET1 SET2\n", 29);
    write(1, "\n", 1);
    write(1, "Translate or delete characters.\n", 33);
    write(1, "\n", 1);
    write(1, "Options:\n", 9);
    write(1, "  -d      delete characters in SET1\n", 36);
    write(1, "  -c      complement SET1 (keep only these characters)\n", 55);
    write(1, "  -h      display this help message\n", 36);
    write(1, "\n", 1);
    write(1, "Examples:\n", 10);
    write(1, "  echo \"tabouret\" | ./tr e a    output: tabourat\n", 49);
    write(1, "  echo -d: \"tabouret\" | ./tr -d  aoe   output: tburt\n",54);
    write(1, "  echo -c:  \"tabouret\" | ./tr -c tabou   output: tabou \n", 57);
}
