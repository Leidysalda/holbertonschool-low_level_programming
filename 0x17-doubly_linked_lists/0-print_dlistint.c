#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head
 *
 * Return: size_t.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	for (i = 0; h != '\0'; i++)
	{
		if (h->n == '\0')
			return (0);
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
