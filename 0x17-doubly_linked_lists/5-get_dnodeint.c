#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: head
 * @index: index
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current->n);
		count++;
		current = current->next;
	}
	return (*head);
}
