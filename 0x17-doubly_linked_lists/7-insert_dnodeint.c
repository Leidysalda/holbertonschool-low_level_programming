#include "lists.h"
/**
 * insert_dnodeint_at_index - get_dnodeint_at_index.
 * @h: head
 * @idx: index
 * @n: data
 * Return: dlistint_t.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h == NULL)
	{
		new->prev = NULL, new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0 && tmp != NULL)
	{
		new->next = tmp;
		new->prev = NULL;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	while (idx > 1 && tmp != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	if (tmp != NULL)
	{
		new->next = tmp->next;
		new->prev = tmp;
		if (tmp->next == NULL)
			tmp->next = new;
		else
		{
			tmp->next->prev = new;
			tmp->next = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}
