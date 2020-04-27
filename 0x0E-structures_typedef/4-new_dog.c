#include <stdlib.h>
#include "dog.h"
#include <string.h>
char *strc(char *des, char *src);
int strl(char *s);

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

	new->name = malloc(1 + strl(name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(1 + strl(owner));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strc(new->name, name);
	new->owner = strc(new->owner, owner);
	new->age = age;

	return (new);
}

/**
 * strl -  len of string.
 * @s: string
 *
 * Return: pointer.
 */

int strl(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	return (j);
}

/**
 * strc -  copy of string.
 * @des: des
 * @src: source
 *
 * Return: pointer.
 */

char *strc(char *des, char *src)
{
	int j, len;
	char *new;

	new = src;
	len = 0;
	while (*new != '\0')
	{
		new++;
		len++;
	}

	for (j = 0; j <= len; j++)
	{
		des[j] = *src;
		src++;
	}
	return (des);
}
