#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct format - Struct format of data
 *
 * @type: Type of data
 * @f: The function associated
 */

typedef struct format
{
	char *type;
	void (*f)(va_list);
} format_t;

char type_char(char a);
int type_integer(int a);
float type_float(float a);
char type_string(char *s);
void (*get_type_func(char *s))(int);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
