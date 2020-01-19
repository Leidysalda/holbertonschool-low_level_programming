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

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i].array = malloc(sizeof(hash_node_t) * size);

	return (tmp);
}
