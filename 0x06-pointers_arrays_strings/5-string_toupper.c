#include "holberton.h"
/**
 * *string_toupper - print a string in reverse
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
