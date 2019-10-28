#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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

	if (separator != NULL)
	{
		va_start(args, n);

		for  (i = 0 ; i < n ;  ++i)
		{
			printf("%d", va_arg(args, int));

			if (i != (n - 1) && separator != NULL)
				printf("%s ", separator);
		}
		va_end(args);
	}
	printf("\n");
}
