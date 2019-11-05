#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a list.
 * @head: initial node
 * @n: string new element
 *
 * Return: value of iterations
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new  = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	last = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (*head);
}
