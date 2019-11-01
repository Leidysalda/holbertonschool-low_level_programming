#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * list_len - print single list.
 * @h: special caracter for separate
 *
 * Return: value of iterations
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if(new == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
	{}

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (new);
}
