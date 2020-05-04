#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: head
 *
 * Return: size_t.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	for (i = 0; h != '\0'; i++)
	{
		if (h->n == '\0')
			return (0);
		h = h->next;
	}
	return (i);
}
