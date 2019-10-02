#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - print a string in reverse
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	for (j = i; j >= 0; j--)
	{
		putchar(s[j]);
}
	putchar('\n');
}
