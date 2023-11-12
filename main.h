#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
/* string Functions */
int _strlen(char *s);
char *_strdup( char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
/*command execute function*/
void execute(char *read_line, char **argv);
#endif
