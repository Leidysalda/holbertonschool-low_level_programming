#include <stdio.h>
#include "holberton.h"
/**
 * is_prime_number2 - a function that prints string in reverse.
 * @n: base
 * @m:
 *Return: Always 0.
 */

int is_prime_number2(int n, int m)
{
	if (n <= 1 || (m != n && n % m == 0))
		return (0);
	if (m == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number2(n, m + 1));
	}
}

/**
 * is_prime_number - a function that prints string in reverse.
 * @n: base
 *
 *Return: Always 0.
 */

int is_prime_number(int n)
{
	return (is_prime_number2(n, 2));
}
