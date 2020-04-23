#include <stdio.h>
#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: char
 * @to: char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
