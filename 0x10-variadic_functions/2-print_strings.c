#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print numbers.
 * @separator: special caracter for separate
 * @n: number
 *
 *Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *name;
	va_list args;

	va_start(args, n);
	for  (i = 0 ; i < n ; i++)
	{
		name = va_arg(args, char *);

		if (name != '\0')
		{
			printf("%s", name);
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}

		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);
}
