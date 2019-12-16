#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list.
 * @h: element
 *
 * Return: size_t
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0 ; head != '\0' ;  i++)
	{
		sum = sum + head->n;

		head = head->next;
	}
	return (sum);
}
