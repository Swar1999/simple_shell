#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
/* string Functions*/ 
int _strlen(char *s);
char *_strdup( char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
/*command execute function*/
void execute(char **argv);
char *get_path(char *command);
char *_getenv(const char *name);
/*global variable*/
extern char **environ;
#endif
