#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct format - Struct format of data
 *
 * @type: Type of data
 * @f: The function associated
 */

typedef struct format
{
	char *type;
	void (*f)();
} format_t;

void type_ch(va_list args);
void type_in(va_list args);
void type_fl(va_list args);
void type_st(va_list args);
void get_type_func(char s, va_list args);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
