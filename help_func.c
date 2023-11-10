#include "main.h"
/**
 * _strcpy - Entry point
 * Description: program that copy sstrings
 * @dest: pointer
 * @src: pointer
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
        int j = 0;
		while ( src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';/*last element in string*/
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
