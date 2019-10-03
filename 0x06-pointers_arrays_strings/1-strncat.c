#include "holberton.h"
/**
 * _strncat - print a string
 * @dest: The caracter to print
 * @src: The word to print
 * @n: account
 *Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
i++;
j = 0;
while (src[j] != '\0')
{
if (j <= n - 1)
dest[i + j] = src[j];
j++;
}
i++;
return (dest);
}

