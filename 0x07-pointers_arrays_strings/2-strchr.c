#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: first occurrence of the character
 * @c: array string
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
		return (NULL);
		}
	}
	return (s);
}
