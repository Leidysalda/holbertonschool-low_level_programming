#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: binary number
 *
 * Return: unsigend or 0.
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		putchar (n + '0');
		return;
	}

	print_binary(n >> 1);
	putchar ('0' + (n & 1));
}
