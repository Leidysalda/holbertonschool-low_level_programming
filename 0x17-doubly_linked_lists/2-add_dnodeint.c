#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t
 * @head: head
 * @n: new data
 *
 * Return: slistint_t.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if ((*head) != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
