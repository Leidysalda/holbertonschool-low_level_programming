#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - a function that prints string in reverse.
 * @x: base
 * @y: exponenty
 *Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
