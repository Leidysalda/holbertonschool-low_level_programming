#include "holberton.h"
/**
 * print_diagonal - write a line
 *@n :
 *: integer
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int i, j;
i = 0;
for (i >= 0; (i <= n); i++)
{
for (j = 0; (j <= 1 * i - 1); j++)
_putchar (' ');
_putchar (92);
_putchar ('\n');
}
}
