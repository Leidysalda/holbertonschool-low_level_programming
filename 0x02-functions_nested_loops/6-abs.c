#include "holberton.h"

/**
 * _abs - print absolute value of an integer
 * @r: The caracter to print
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int r)
{
	if (r >= 0)
	{
		_putchar(r);
	}
	else
	{
		r = (r * -1);
	}
	return (r);
}
