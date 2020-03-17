#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n) of alinked l
 * @head: initial node
 *
 * Return: add list.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
