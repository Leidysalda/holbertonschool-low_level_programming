#include "holberton.h"
/**
* print_sign - print sign of a number
*@n: The caracter to print
*
*Return: 0n success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int n)
{
if (n > '0')
_putchar('+');
_putchar('1');
if
(n == '0')
_putchar('0');
if
(n < '0')
_putchar('-');
_putchar('1');
return (0);
}