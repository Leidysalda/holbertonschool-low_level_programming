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
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
