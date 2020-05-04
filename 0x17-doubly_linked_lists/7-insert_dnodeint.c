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
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	new->n = n;
	while (idx > i)
	{
		tmp = tmp->next;
		i++;

	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (tmp);
}
