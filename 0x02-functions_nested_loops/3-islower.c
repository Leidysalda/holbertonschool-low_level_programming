#include "holberton.h"
/**
 * _islower - checks for lowercase
 *@c: The caracter to print
 *
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
