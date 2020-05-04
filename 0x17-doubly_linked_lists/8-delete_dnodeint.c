#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index of a
 * dlistint_t linked list.
 * @h: head
 * @idx: index
 * @n: data
 * Return: dlistint_t.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *aux;
	unsigned int i = 0;

	if (*head)
	{
		aux = *head;
		new = *head;
		if (index == 0)
		{
			aux = aux->next;
			if (aux)
				aux->prev = NULL;
			free(*head);
			(*head) = aux;
			return (1);
		}
		for (i = 0; i < index && aux; i++, aux = aux->next)
		{
			if (i < index - 1)
				new = new->next;
		}
		if (aux == NULL)
			return (-1);
		new->next = aux->next;
		if (aux->next != NULL)
			new->next = aux->next->next;
		free(aux);
		return (1);
	}
	return (-1);
}
