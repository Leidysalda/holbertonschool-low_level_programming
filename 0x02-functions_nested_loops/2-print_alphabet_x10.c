#include "holberton.h"
/**
* print_alphabet - writes the alphabet x 10
* The caracter to print
*
*Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
int n;
int i = 0;
do {
for (n = 'a' ; n <= 'z'; n++)
{
_putchar(n);
}
i++;
_putchar('\n');
} while (i <= 9);
}
