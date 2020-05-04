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
	unsigned int i = 1;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	while (idx > i)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (temp);
}
