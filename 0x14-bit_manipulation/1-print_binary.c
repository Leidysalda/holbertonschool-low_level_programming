#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: input
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	printf("%p", n % 2);
}
