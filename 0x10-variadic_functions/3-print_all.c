#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all numbers or caracters.
 * @format: special caracter for separate
 * @type: type option
 * @f: function
 *
 *Return: Always 0.
 */
typedef struct format
{
        char *type;
        void (*f)();
} format_t;

/**
 * type_ch - print all numbers or caracters.
 * @format: special caracter for separate
 *
 *Return: Always 0.
 */

void type_ch(va_list args)
{
        printf("%c", va_arg(args, int));
}

/**
 * print_all - print all numbers or caracters.
 * @format: special caracter for separate
 *
 *Return: Always 0.
 */

void type_in(va_list args)
{
        printf("%d", va_arg(args, int));
}

/**
 * print_all - print all numbers or caracters.
 * @format: special caracter for separate
 *
 *Return: Always 0.
 */

void type_fl(va_list args)
{
        printf("%f", va_arg(args, double));
}

/**
 * print_all - print all numbers or caracters.
 * @format: special caracter for separate
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
  
        va_list args;
        unsigned int j, i;

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
		while (selector[i].type != NULL)
		{
			if (*(selector[i].type) == format[j])
			{
            
				((selector[i].f)(args));
            
				if (format[j+1] != '\0')
				{
					printf(", ");
				}
				break;
			}
			i++;    
		}
		j++;
	}
        va_end(args);
        printf("\n");
   
	return;
}
