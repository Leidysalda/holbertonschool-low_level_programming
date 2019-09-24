#include "holberton.h"
/**
* print_alphabet - writes the alphabet
* The caracter to print
*
*Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
int n;
for (n = 'a' ; n <= 'z' ; n++)
_putchar(n);
_putchar('\n');
}
