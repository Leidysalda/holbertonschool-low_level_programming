#include "holberton.h"
/**
 * _strcat - print a string
 * @dest: The caracter to print
 * @src: The word to print
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
i++;
j = 0;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
i++;
return (dest);
}

