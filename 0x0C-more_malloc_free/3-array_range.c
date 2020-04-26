#include "holberton.h"
/**
 * array_range -  function that creates an array of integers.
 * @min: min
 * @max: max
 *
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int *new;
 	int i, size;

	if (min > max)
		return(NULL);

	size = max - min;
	new = malloc((size + 1) * sizeof(int));

	if (new == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		new[i] = min;
		min++;
	}
	return(new);
}
