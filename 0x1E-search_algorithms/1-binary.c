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
	int middle, left = 0;
	int right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;

		if (value > array[middle])
			left = middle + 1;
		else if (value < array[middle])
			right = middle - 1;
		else
		/* (value == array[middle]) */
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @left: left
 */
void print_array(int *array, int left, int size)
{

	printf("Searching in array: ");
	while (left <= size)
	{
		/* if (left > 0) */
		printf("%d ", array[left]);
		left++;
	}
	printf("\n");
}
