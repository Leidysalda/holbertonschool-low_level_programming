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
	dlistint_t *find = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (index > i)
	{
		find = head->next;
		head = find;
		i++;
	}
	return (find);
}