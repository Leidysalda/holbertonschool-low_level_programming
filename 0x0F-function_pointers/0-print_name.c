#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: function
 *
 *Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
<<<<<<< HEAD
	if (f != NULL && name != NULL)
	{
		f(name);
	}
=======
	f(name);
>>>>>>> 2a577b69078474713bb1d9d4189348c8844cd7e9
}
