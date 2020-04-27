#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog -   function that frees dogs.
 * @d: name
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
