#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits.
 * @n: number
 * @m: position
 *
 * Return: unsigend or 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) !=  (m & 1))
			i++;

		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
