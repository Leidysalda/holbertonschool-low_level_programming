#include "holberton.h"
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: element array
 * @size: size array
 *
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		new[i] = 0;
	}
	return (new);
}
