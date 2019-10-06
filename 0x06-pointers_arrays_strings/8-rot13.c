#include "holberton.h"
/**
 * *rot13 - print a string upper in especial caracter
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char m[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char n[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; m[j] != 0 ; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
