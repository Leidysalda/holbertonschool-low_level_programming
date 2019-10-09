#include <stdio.h>
#include "holberton.h"
/**
 * _sqrt_recursion2 - a function that prints string in reverse.
 * @n: base
 * @m: exponent
 *Return: Always 0.
 */

int _sqrt_recursion2(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, m + 1));
}

/**
  * _sqrt_recursion - a function that prints string in reverse.
  * @n: base
  *
  *Return: Always 0.
  */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 0));
}
