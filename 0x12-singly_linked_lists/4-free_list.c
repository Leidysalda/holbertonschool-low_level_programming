#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * free_list - list.
 * @head: first element
 *
 * Return: value of iterations
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}
}
