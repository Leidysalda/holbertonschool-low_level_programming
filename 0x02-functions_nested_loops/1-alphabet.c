#include "holberton.h"
/**
* print_alphabet - writes the alphabet
* @void: parameter in
*Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
