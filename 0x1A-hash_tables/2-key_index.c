#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 *
 * @str: strinf
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
