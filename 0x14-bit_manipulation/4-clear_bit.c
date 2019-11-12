#include "holberton.h"
/**
<<<<<<< HEAD
 * set_bit - function that sets the value of a bit to 1 at a given index.
=======
 * clear_bit - function that sets the value of a bit to 1 at a given index.
>>>>>>> 4c0cd467c93d346003c74993651144fa5269bd38
 * @n: number
 * @index: position
 *
 * Return: unsigend or 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
<<<<<<< HEAD
	if (index > 63)
		return (-1);

	*n = *n & (0 << index);
=======
	int bit;

	if (index > 63)
		return (-1);

	bit = (*n >> index) & 1;
	if (bit == 1)
		*n = *n - (1 << index);
>>>>>>> 4c0cd467c93d346003c74993651144fa5269bd38

	return (1);
}
