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
<<<<<<< HEAD
return (1);
else
=======
{
_putchar('1');
}
>>>>>>> 7e2775a1eccb599d2cfd9c3a877a8e5b17cd7abc
return (0);
}
