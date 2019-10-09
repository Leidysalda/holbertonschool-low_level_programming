#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - a function that prints lengh of a string.
 * @s: string
 *
 *Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
