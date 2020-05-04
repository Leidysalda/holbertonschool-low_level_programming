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
	unsigned int i = 0;
	dlistint_t *find = head;

	while (find != NULL)
	{
		if (i == index - 1)
			return (find->next);
		i++;
		find = find->next;
	}
	return (find);
}
