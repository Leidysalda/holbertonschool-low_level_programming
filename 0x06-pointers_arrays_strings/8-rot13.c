#include "holberton.h"
/**
 * *rot13 - print a string upper in especial caracter
 * @c: The caracter to print
 *
 *Return: Always 0.
 */
char *rot13(char *c)
{
	int i;
		for (i = 0 ; c[i] ; c++)
		{
			if ((c[i] > 'a' && c[i] < 'm') ||
			    (c[i] > 'A' && c[i] <'M'))
				c[i] += 13;
			else if ((c[i] > 'n' && c[i] < 'z') ||
				 (c[i] > 'N' && c[i] < 'Z'))
				c[i] -= 13;
		}
		return (c);
}
