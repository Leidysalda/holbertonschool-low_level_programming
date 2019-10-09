#include <stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - a function that prints the chessboard.
 * @s: array
 *
 *Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
