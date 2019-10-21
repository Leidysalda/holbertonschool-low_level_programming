#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print serial number at 98
 * @num: number limit
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
		printf("98");

	printf("\n");

	return (0);
}
