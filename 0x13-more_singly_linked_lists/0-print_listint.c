#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_listint - print single list (numbers).
 * @h: element of list
 *
 * Return: valor of iterations
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	for (i = 0 ; h != '\0' ;  i++)
	{
		if (h->n == '\0')
		{
			return (0);
		}
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
