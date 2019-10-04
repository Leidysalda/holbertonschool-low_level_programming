#include "holberton.h"
/**
 * reverse_array - print a string in reverse
 * @a: The caracter to print
 * @n: number of caracters
 *Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (j = i; j >= 0 ; j--)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
