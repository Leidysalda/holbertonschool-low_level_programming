#include "holberton.h"
/**
 * _strcmp - print a string comparate
 * @s1: The caracter to print
 * @s2: The word to print
 *
 *Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
i++;
return (s1[i] - s2[i]);
}
