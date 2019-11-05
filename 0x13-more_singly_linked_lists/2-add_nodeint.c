#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: initial node
 * @n: string new element
 *
 * Return: value of iterations
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}



	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
