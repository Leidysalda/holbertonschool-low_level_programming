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
	unsigned int i;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (h == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}

	new->next = temp->next;
	new->prev = temp;
	new->n = n;
	temp->next->prev = new;
	temp->next = new;

	return (*h);
}
