#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * freee_dlistint - function that free a dlistint_t list.
 * @head: head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head);
		head = last;
}
}
