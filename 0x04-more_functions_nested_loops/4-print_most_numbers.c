#include "holberton.h"
/**
 * print_most_numbers - print numbers excep 2 and 4
 * Result
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
int c;
for (c = '0' ; c <= '9' ; c++)
if (c != '2' && c != '4')
_putchar(c);
_putchar('\n');
}
