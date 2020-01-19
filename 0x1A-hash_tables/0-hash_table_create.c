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
	hash_table_t *tmp = malloc(sizeof(hash_node_t));
	unsigned long int i;

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i].array = NULL;

	return (tmp);
}
