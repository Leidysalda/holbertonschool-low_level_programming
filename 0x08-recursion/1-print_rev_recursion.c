#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev_recursion - a function that prints string in reverse.
 * @s: string
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
