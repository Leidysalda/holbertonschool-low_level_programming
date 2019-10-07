#include <stdio.h>
#include "holberton.h"
/**
 * _strspn - locates a character in a string
 * @s: first occurrence of the character
 * @accept: array string
 *Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!(accept[j]))
			break;
	}
	return (i);
}
