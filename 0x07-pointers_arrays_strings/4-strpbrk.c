#include <stdio.h>
#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first occurrence of the character
 * @accept: array string
 *Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
