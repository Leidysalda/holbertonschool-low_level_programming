#include "holberton.h"
/**
 * *rot13 - print a string in rot 13 cypher
 * @s: The caracter to print
 *
 *Return: string.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char m[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char n[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

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
