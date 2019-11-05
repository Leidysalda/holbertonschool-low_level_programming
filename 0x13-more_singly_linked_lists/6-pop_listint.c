#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: initial node
 *
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int inf = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		inf = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (inf);
}
