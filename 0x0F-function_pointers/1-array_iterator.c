#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - print elements in decimal and hexa
 * @array: name array
 * @size: size array
 * @action: function pointer
 *
 *Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
