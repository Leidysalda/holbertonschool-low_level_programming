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
	dlistint_t *new;
	dlistint_t *tmp = *h;
	unsigned int i = 0;


	if (h == NULL)
		return (NULL);

	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;

	}

	new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	if (tmp->next != NULL)
		tmp->next->prev = new;

	tmp->next = new;

	return (tmp);
}
