#include "holberton.h"
/**
 * _puts - print a string
 * @str: The caracter to print
 *
 *Return: Always 0.
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
