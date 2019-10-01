#include <string.h>
#include "holberton.h"
/**
 * int _strlen - return the length of a string
 *@s: The caracter to print
 *
 *Return: Always 0.
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
