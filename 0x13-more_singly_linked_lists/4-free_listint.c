#include "lists.h"
/**
 * free_listint - free list.
 * @head: initial node
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	if ((*head).next)
		free_listint((*head).next);

	free(head);
}
