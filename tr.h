/*
*  E89 Pedagogical & Technical Lab
*  project: tr.h
*  created on:  2026-01-03 - 16:59 +0100
*  1st author:  sacha.juillard
*  description: header for all functions used in the tr project
*/

#ifndef TR_H_
#define TR_H_

char replace_char(char input, const char *to_replace, const char *substitute);
void translate(const char *from, const char *to);
void print_help(void);
void conserve_chars(const char *set);
void delete_chars(const char *to_delete);
int has_opt(int argc, char **argv, char opt);
const char *get_set(int argc, char **argv);
int stu_char_in_set(char c, const char *set);

#endif /* TR_H_ */

