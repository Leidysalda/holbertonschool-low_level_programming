#include "variadic_functions.h"

/**
 * print_list - print numbers.
 * @h: special caracter for separate
 *
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	va_list argument;

	va_start(argument, n);
	for  (i = 0 ; i < n ;  i++)
	{
		printf("%d", va_arg(argument, unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argument);
}
