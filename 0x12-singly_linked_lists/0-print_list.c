#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_list - print single list.
 * @h: special caracter for separate
 *
 *
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0 ; h != 0 ;  i++)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (2);
}
