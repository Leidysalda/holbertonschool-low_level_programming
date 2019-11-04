#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: initial node
 * @n: new element
 *
 * Return: value of iterations
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = head;
	int i;

	while (new->next != NULL)
		new = new->next;

       	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = (*head);

	(*head) = new;

	return (head);
}
