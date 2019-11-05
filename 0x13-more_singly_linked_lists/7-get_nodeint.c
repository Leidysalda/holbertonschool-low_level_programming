#include "lists.h"
/**
 * get_nodeint_at_index - unction that returns the nth node.
 * @head: initial node
 * @index: iterations
 *
 * Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find = head;	index = 0;
	while (find != NULL)
	{
		if (find->n == index)
		{
			return (find->n);
		}
		find = find->next;
	}
	return (*find);
}
