#include "holberton.h"
/**
 * strl -  len of string.
 * @s: string
 *
 * Return: pointer.
 */

int strl(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
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
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);


	new_string = malloc(strlen(s1) + strlen(s2) + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		*(new_string + i) = *(s1 + i);

	for (i = 0; i < strlen(s2); i++)
		*(new_string + (i + strlen(s1))) = *(s2 + i);

	*(new_string + (i + strlen(s1))) = '\0';

	return (new_string);
}
