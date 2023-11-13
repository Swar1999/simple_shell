#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
/*global variable*/
extern char **environ;
/* string Functions */
int _strlen(char *s);
char *_strdup( char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *str, char s);
int _strncmp(char *s1, char *s2, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
/*command execute function*/
void execute(char *read_line, char **argv);
char *_getenv(char *env_name);
char *get_path(char *command);
#endif
