#include "main.h"
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
/**
 * _memcpy - Entry point
 * Description: program that copies memory area
 * @dest: pointer to area 2
 * @src: pointer to area 1
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;
		for (; i < j; i++)
		{
			dest[i] = src[i];
			n--;
		}
		return (dest);
}
/**
 * _strdup - function that duplicates string
 * @str : string to be coped
 * Return: new copyed string
 */
char *_strdup( char *str)
{
	size_t len;
	char *dstr;/*duplicated str*/
		len = _strlen(str) + 1;
		dstr = malloc(sizeof(str));/*allocate memory space*/
		if (dstr != NULL)
		{
			_memcpy(dstr, str, len);
		}
		return (dstr);
}
/**
 * _strchr - function that search for sepcific character in a string
 * @s : string 
 * @c : character to be searched
 * Return : address of s
 */
char *_strchr(char *s, char c)
{
        int i = 0;
                for (; s[i] >= '\0'; i++)
                {
                        if (s[i] == c)
                                return (&s[i]);
                }
                return (0);
}
/**
 * _strcmp - Entry point
 * Description: program that compare two strings
 * @s1: pointer
 * @s2: pointer
 * @n : length of string
 * Return: Always 0 (Success)
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;
		while ((s1[i] != '\0' || s2[i] != '\0')&& i < n)
		{
			if (s1[i] != s2[i])
                        {
                                return (s1[i] - s2[i]);
                        }
                        i++;
                }
		if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		       	return (0);
		return (s1[i] - s2[i]);
}
