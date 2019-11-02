#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the beginning of a list.
 * @head: initial node
 * @str: string new element
 *
 * Return: value of iterations
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int i;

	new  = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	last = *head;
	for (i = 0; str[i]; i++)
	{}
	new->str = strdup(str);
	new->len = i;
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
