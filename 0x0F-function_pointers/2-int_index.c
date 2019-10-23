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

        if (cmp != NULL && array != NULL)
        {
		for (i = 0; i < size; i++)
                {
			if (!(size <= 0))
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
			else
			{
				return(-1);
			}
		}
        }
	return (0);
}
