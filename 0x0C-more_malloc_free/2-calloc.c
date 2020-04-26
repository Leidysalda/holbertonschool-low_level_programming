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
	unsigned int *new = malloc(nmemb + size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	return (new);
}
