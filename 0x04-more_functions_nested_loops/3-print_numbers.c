#include "holberton.h"
/**
 * print_numbers - print numbers
 * Res
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int c;
for (c = '0' ; c <= '9' ; c++)
_putchar(c);
_putchar('\n');
}
