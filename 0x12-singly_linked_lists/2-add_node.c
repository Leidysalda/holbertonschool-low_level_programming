#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: initial node
 * @str: string new element
 *
 * Return: value of iterations
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{}

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (new);
}
