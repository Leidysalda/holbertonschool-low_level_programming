#include "holberton.h"
/**
 * swap_int - updates the value
 *@a: The caracter to print
 *@b: The caracter to print
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
