#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DLM " \n\t"
extern char **environ;

char *scanner(void);
void ppr(char *c, size_t len);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char **transfer(char *l);
int executer(char **c, char **argv);

void printStringArray(char **strArray);
void imFree(char **sa);
#endif
