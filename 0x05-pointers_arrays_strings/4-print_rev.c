#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
