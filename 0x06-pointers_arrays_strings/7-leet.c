#include "holberton.h"
/**
 * *leet - print a string upper in especial caracter
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int j;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; m[j] ; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
