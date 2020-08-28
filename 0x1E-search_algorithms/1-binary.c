#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary
 *
 * @array: array
 * @size: len array
 * @value: value
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left = 0;
	int middle;

	while (left < (int)size)
	{
		printf("Searching in array: ");
		middle = (left + (size-1)) / 2;

		for (i = left; i <= ((int)size - 1); i++)
		{
			if (i == ((int)size - 1))
				printf("%i\n", array[i]);
			else
				printf("%i,", array[i]);
		}


		if (array[middle] == value)
			return(middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			size = middle - 1;
	}
	return (-1);
}
