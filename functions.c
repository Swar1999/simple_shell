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
	unsigned int i;
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
/**
 * _strdup - function that duplicates string
 * @str : string to be coped
 * Return: new copyed string
 */
char *_strdup(char *str)
{
	size_t len;
	char *dstr;/*duplicated str*/
		len = _strlen(str) + 1;
		dstr = malloc(len);/*allocate memory space*/
		if (dstr != NULL)
		{
			_memcpy(dstr, str, len);
		}
		return (dstr);
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
