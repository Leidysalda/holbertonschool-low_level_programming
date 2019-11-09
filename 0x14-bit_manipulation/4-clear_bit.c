#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position
 *
 * Return: unsigend or 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (*n >> index) & 1;
	if (bit == 1)
		*n = *n - (1 << index);

	return (1);
}
