#include <stdio.h>
#include "holberton.h"
/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: first occurrence of the character
 * @needle: array string
 *Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' ; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (0);
}
