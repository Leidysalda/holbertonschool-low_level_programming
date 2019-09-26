#include "holberton.h"
/**
 *_isdigit(int c) - checks for digits
 *@c: The number to print
 *
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
c = c % 10;

if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
