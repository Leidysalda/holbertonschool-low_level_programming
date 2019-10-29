#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers.
 * @separator: special caracter for separate
 * @n: number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argument;

	va_start(argument, n);
	for  (i = 0 ; i < n ;  i++)
	{
		printf("%d", va_arg(argument, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(argument);
}
