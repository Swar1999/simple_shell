#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
/* string Functions 
int _strlen(char *s);*/
char *_strdup( char *str);
/*char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);*/
/*command execute function*/
void execute(char **argv);
#endif
