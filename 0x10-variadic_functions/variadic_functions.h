#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>

/**
 * struct format - Initial data
 * @type: Name
 * @f: function
 *
 * Description: Struct format
 */
typedef struct format
{
	char *type;
	void (*f)();
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
