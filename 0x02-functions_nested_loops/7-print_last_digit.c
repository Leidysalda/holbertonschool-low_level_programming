#include "holberton.h"

/**
 * print_last_digit - print absolute value of an integer
 * @r: The caracter to print
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int r)
{
	int res;

	res = r % 10;

	if (res > 0 && res < 9)
	{
		_putchar(res + '0');
		return (res);
	}
	else
	{
		res = res * -1;
		_putchar(res + '0');
		return (res);
	}
}
