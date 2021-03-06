#include "lists.h"
/**
 * free_listint2 - frees a listint_t.
 * @head: initial node
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
