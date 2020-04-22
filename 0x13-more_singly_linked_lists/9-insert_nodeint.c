#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node
 * @head: initial node
 * @idx: index of the list
 * @n: int
 * Return: add list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (*head);
	}
	else
		while (idx)
		{
			tmp = tmp->next;
			idx--;
			if (!tmp)
			{
				free(new);
				return (NULL);
			}
		}
	new->next = tmp->next;
	tmp->next = new;
	return (tmp);
}
