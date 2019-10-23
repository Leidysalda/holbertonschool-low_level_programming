#include "holberton.h"
/**
 * print_square - write a square #
 * @size : size the square
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)

{
	int n;
	int i = 0;

	do {
		for (n = 0 ; n <= size ; n++)
		{
			if (n > 0)
			{
				_putchar('#');
			}
		}
		i++;
		_putchar('\n');
	}

	while (i < size);
}
