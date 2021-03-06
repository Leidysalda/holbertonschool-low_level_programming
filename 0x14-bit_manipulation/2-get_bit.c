#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: binary number
 * @index: position
 *
 * Return: unsigend or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n = n >> index;
	n = n & 1;

	return (n);
}
