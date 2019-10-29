#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers.
 * @separator: special caracter for separate
 * @n: number
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for  (i = 0 ; i < n ;  i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && n > i + 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
