#include <stdio.h>
#include "holberton.h"
/**
 * factorial - function that prints factorial that number.
 * @n: string
 *
 *Return: Always 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
