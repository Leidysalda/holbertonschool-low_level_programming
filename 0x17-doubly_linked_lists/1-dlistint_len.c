#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list.
 * @h: element
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	for (i = 0 ; h != '\0' ;  i++)
	{

		h = h->next;
	}
	return (i);
}
