#include <stdio.h>
#include "holberton.h"
/**
 * _memcpy - fill memory with a constant byte
 * @dest: memory area point
 * @src: constant byte
 * @n: fill the first
 *Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
