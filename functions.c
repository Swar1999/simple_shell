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
char *_strdup(const char *str)
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
