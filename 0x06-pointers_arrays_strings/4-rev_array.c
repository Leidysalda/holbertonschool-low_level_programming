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
	int t;
	i = 0;
	n = n-1;
	while (i < n)
	{
		t = a[n];
		a[n] = a[i];
		a[i] = t;
		i++;
		n--;
	}
