#include "holberton.h"
/**
 * print_line - write a line
 *@n :
<<<<<<< HEAD
 *: integer
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
int i;
i = 0;
while (i < n)
{
_putchar (95);
i++;
}
_putchar ('\n');
}
=======
 * integer
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int i, j;
i = 1;
for (i = 1; (i <= n); i++)
{
if (n <= 0)
{
_putchar('\n');
}
for (j = 1; j <= i ; j++)
_putchar (' ');
_putchar (92);
_putchar ('\n');
}
}
>>>>>>> e54f2edea3115b1a64769758305ee74bc8402bd3