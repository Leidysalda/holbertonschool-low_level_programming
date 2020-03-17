#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 * @head: initial node
 * @index: index
 * Return: pointer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (count < index)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
