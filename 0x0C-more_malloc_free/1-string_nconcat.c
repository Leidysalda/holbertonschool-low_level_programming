#include "holberton.h"
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
	char *new_string = malloc(strlen(s1) + strlen(s2) + n);

	if (n > strlen(s2))
		return(NULL);

	strcpy(new_string, s1);
	strcat(new_string, s2);
	return(new_string);
}
