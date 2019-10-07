#include <stdio.h>
#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * @s: memory area point
 * @b: constant byte
 * @n: fill the first
 *Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
	s[i] = b;
return (s);
}
