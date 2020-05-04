#include "lists.h"

/**
 * get_dnodeint_at_index - get_dnodeint_at_index.
 * @head: head
 * @index: index
 *
 * Return: dlistint_t.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *find = head;
	unsigned int i = 0;

	while (index > i)
	{
		find = head->next;
		head = find;
		i++;
	}
	return (find);
}
