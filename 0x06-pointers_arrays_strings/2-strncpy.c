#include "holberton.h"
/**
 * _strncpy - print a string
 * @dest: The caracter to print
 * @src: The word to print
 * @n: account
 *Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
