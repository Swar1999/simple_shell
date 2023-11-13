#include "main.h"
/**
 * _strcat - Entry point
 * Description: program that prints two strings
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
		i = 0;
		while (dest[i] != '\0')
		{
			i++;
		}
		j = 0;
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
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
#include "main.h"
/**
 * _getenv - function that search for enviroment vars
 * @name : string to be searched
 * Return : the value of the enviroment var or null
 */
char *_getenv(char *env_name)
{
        extern char **environ;/*declare the global variable*/
        int i;
        char *sign;/*character to search for*/
                while (environ[i] != NULL)
                {
                        if (_strncmp(environ[i], env_name, _strlen(env_name) == 0))
                                sign = _strchr(environ[i], '=');/*search for = sign*/
                        if (sign != NULL)
                                return (sign + 1);
                }
                perror("No such a file or directory");
                return (NULL);
}