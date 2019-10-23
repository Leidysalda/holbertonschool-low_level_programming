#include "holberton.h"
/**
 * print_diagonal - write a diagonal
 * @n :
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i, j;

	j = 0;
	if (0 < n)
	{
		for (i = 0; i < n; i++)
		{
			while (i > 0 && j < i)
			{
				_putchar (' ');
				j++;
			}
			j = 0;
			_putchar('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
