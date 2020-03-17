#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: is the size of the array
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (NULL);

	tmp->array = malloc(sizeof(hash_node_t *) * size);
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->size = size;

	for (i = 0; i < size; i++)
		tmp->array[i] = NULL;

	return (tmp);
}