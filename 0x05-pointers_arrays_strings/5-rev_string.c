#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - print a string in reverse
 * @s: The caracter to print
 *
 *Return: Always 0.
 */
void rev_string(char *s)
{
int i;
int j;
int c;
i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
j = 0;
while (i > j)
{
c = s[i];
s[i] = s[j];
s[j] = c;
j++;
i--;
}
}
