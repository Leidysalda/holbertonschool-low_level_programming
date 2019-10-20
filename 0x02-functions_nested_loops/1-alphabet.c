#include "holberton.h"
/**
* print_alphabet - writes the alphabet
*
*Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/

int print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
