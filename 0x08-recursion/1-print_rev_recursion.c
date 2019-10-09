#include <stdio.h>
#include "holberton.h"
/**
 * _puts_rev_recursion - a function that prints the chessboard.
 * @s: array
 *
 *Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
