#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data (n).
 * @head: element
 *
 * Return: add
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
