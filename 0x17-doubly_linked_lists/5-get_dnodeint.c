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
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i != index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
