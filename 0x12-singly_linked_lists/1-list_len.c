#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * list_len - print single list.
 * @h: special caracter for separate
 *
 * Return: value of iterations
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (i = 0 ; h != '\0' ;  i++)
		h = h->next;
	return (i);
}
