#include "main.h"
/**
 * _strncpy - Entry point
 * Description: program that copy sstrings
 * @dest: pointer
 * @src: pointer
 * @n: counter
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
		j = 0;
		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
		return (dest);
}
/**
 * *_strcpy - function to copy string
 * @dest : pointer to string 2
 * @src : pointer to string 1
 * Return: adress of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
}
/**
 * execute - function to search for path of a command
 * @read_line : string
 * @head : struct
 * Return: nothing
 */
void execute(char *read_line, char **artoken)
{
	pid_t id;/*id of process*/
		id = fork();/*call the process again*/
		if (id == 0)
		{
			execve(read_line, artoken, NULL);/*search for path name*/
		}
		else
		{
			wait(NULL);/*wait for proccess complition*/
		}
}
/**
 * _strlen - Entry point
 * Description: program that print the string length
 * @s: pointer
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;
		while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
}
