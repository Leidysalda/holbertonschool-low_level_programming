#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size
 *
 *Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int e = 0, b = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				e = e + a[(size + 1) * i];
			if (i + j == size - 1)
				b = b + a[(size - 1) * (i + 1)];
		}
	}
	printf("%i, %i\n", e, b);
}
