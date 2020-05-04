#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index of a
 * dlistint_t linked list.
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: dlistint_t.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
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
