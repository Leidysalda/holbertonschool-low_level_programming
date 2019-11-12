#include "holberton.h"
/**
 * get_endianness - function that checks the endianness..
 *
 *
 * Return: unsigend or 0.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int) *c);
}
