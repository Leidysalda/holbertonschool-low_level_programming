#include "holberton.h"
/**
 * _isdigit - checks for digits
 *@c: The number to print
 *
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(char c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
