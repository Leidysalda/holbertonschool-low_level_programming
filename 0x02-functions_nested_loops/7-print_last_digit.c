#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @r:The caracter to print
 *
 *Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int r)
{
r = (r % 10);
return(r);
}
