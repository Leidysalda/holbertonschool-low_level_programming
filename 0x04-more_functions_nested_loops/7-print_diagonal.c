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
i = 1;
for (i = 1; (i <= n); i++)
{
if (i <= 0)
{
_putchar('\n');
}
for (j = 1; j <= i ; j++)
_putchar (' ');
_putchar (92);
_putchar ('\n');
}
}
