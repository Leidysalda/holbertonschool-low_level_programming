#include "lists.h"
/**
 * listint_len - print single list (numbers).
 * @h: element of list
 *
 * Return: valor of iterations
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	for (i = 0 ; h != '\0' ;  i++)
	{
		if (h->n == '\0')
		{
			return (0);
		}
		h = h->next;
	}
	return (i);
}
