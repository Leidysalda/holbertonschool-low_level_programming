#include "holberton.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input
 *
 * Return: 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int n = atoi(b);
	unsigned int rem, dec = 0, i = 0;

	while (n != 0)
	{
		rem = n % 10;
		dec += (rem * pow(2, i));
		n /= 10;
		i++;
	}

	return (dec);
}
