#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: head
 * @n: new data
 *
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

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
	new->prev = last;

	return (*head);
}
