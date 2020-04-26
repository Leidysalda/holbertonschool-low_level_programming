#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned
 *
 *Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
