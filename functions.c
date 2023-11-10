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
 * Return : address of dest
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
void execute(char *read_line, char **list)
{
	pid_t id;/*id of process*/
	id = fork();/*call the process again*/
	if (id == 0)
	{
		execve(line, arr, NULL);/*search for path name*/
	}
	else
	{
		wait(NULL);/*wait for proccess complition*/
	}
}
