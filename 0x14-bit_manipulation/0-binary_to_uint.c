#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing
 *
 * Return: unsigend or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	while (*b)
	{
		if ((*b != '0' && *b != '1') && (!b))
			return (0);

		i <<= 1;
		i += *b++ - '0';
	}
	return (i);
}
