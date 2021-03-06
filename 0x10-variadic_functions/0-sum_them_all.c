#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition all elements.
 * @n: array
 *
 *Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result;
	unsigned int i;
	va_list args;

	result = 0;
	va_start(args, n);

	for  (i = 0 ; i < n ;  ++i)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	return (result);
}
