#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list.
 * @h: element
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	for (i = 0 ; h != '\0' ;  i++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}
	return (i);
}
