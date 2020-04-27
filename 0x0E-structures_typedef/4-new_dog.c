#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog -  function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 *Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new ==  NULL)
		return (NULL);

	new->name = malloc(1 + strlen(name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(1 + strlen(owner));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);

	return (new);
}
