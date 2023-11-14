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
