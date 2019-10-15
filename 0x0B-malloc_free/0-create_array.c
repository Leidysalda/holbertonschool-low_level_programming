#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array - create a array
 * @size: size array
 * @c:
 *
 *Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i= 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
