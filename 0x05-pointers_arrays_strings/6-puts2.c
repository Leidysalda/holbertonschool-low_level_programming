#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - print a string in reverse
 * @str: The caracter to print
 *
 *Return: Always 0.
 */

void puts2(char *str)
{
int i;
int j;
i = 0;
while (str[i] != '\0')
i++;
j = 0;
while (j < i)
{
_putchar(str[j]);
j += 2;
}
_putchar ('\n');
}
