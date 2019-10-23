#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - print elements in decimal and hexa
 * @array: name array
 * @size: size array
 * @cmp: function pointer
 *
 *Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != 0 && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
