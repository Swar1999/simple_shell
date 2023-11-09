#include "main.h"
/**
 * _strcpy - Entry point
 * Description: program that copy sstrings
 * @dest: pointer
 * @src: pointer
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
        int j;
                j = 0;
                while (j < n && src[j] != '\0')
                {
                        dest[j] = src[j];
                        j++;
                }
}
