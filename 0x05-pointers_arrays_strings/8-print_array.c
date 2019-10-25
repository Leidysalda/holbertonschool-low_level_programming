#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print every elements of array
 * @a: array
 * @n: element of array
 *
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;
	int val;

	for (i = 0; i < n; i++)
	{
		val = *a;
		printf("%d", val);
		a++;
		if (i != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
