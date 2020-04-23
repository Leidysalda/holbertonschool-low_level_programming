#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: dest
 * @src: source
 *
 * Return: pointer dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
