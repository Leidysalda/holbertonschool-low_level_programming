#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits.
 * @n: number
 * @m: position
 *
 * Return: unsigend or 0.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;

	if (*c)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	getchar();
	return 0;
}
