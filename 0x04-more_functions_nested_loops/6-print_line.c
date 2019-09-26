#include "holberton.h"
/**
 * print_line - write a line
 *@n :
 *: integer
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
int i;
i = 0;
while (i <= n)
{
_putchar ('_');
i++;
}
_putchar ('\n');
}
