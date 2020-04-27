#include "holberton.h"
/**
 * strl -  len of string.
 * @s: string
 *
 * Return: pointer.
 */

int strl(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	return (j);
}

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: unsigned
 *
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = strl(s1);
	b = strl(s2);

	if (n < b)
		b = n;

	new_string = malloc(a + b + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		*(new_string + i) = *(s1 + i);

	for (i = 0; i < b; i++)
		*(new_string + (i + a)) = *(s2 + i);

	*(new_string + (i + a)) = '\0';

	return (new_string);
}
