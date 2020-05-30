#include "hash_tables.h"
/**
 * hash_table_set - hash table
 * @ht: struct
 * @key: key
 * @value: value
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	if (ht->array[i] != NULL)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	if (ht->array[i] == NULL)
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (tmp == NULL)
			return (0);
		tmp->next = NULL;
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		ht->array[i] = tmp;
	}
	else
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (tmp == NULL)
			return (0);
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		tmp->next = ht->array[i];
		ht->array[i] = tmp;
	}
	return (1);
}
