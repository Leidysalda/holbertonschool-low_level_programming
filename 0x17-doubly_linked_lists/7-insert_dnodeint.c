#include "lists.h"

/**
 * insert_dnodeint_at_index - get_dnodeint_at_index.
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: dlistint_t.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *find = head;
	unsigned int i;

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
