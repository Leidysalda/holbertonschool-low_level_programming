#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: head
 *
 * Return: dlistint_t.
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int i, sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; head != '\0'; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
