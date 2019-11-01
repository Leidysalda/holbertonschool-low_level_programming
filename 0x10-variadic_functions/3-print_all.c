#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * type_ch - print type of characters
 * @args: instance of va_list
 *
 *Return: Always 0.
 */
void type_ch(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * type_in - print type of integer.
 * @args: instance ofva_lis
 *
 *Return: Always 0.
 */
void type_in(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * type_fl - print type of float.
 * @args: instance of va_lsit
 *
 *Return: Always 0.
 */
void type_fl(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * type_st - print type of string
 * @args: instance of va_list
 *
 *Return: Always 0.
 */
void type_st(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
		printf("(nil)");
}

/**
 * print_all - print all numbers or caracters.
 * @format: special caracter for separate
 *
 *Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;

	format_t selector[] = {
		{"c", type_ch},
		{"i", type_in},
		{"f", type_fl},
		{"s", type_st},
		{NULL, NULL}
	};

	va_start(args, format);

	j = 0;
	while (format && format[j])
	{
		i = 0;
		while (selector[i].type)
		{
			if (*(selector[i].type) == format[j] )
			{
				((selector[i].f)(args));
				printf(", ");
			}
			i++;
		}
		j++;
	}
	va_end(args);

	printf("\n");
}
