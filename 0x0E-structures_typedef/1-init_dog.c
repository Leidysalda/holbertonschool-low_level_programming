#include <stdio.h>
#include "dog.h"
/**
 * init_dog - fill memory with a constant byte
 * @d: array
 * @name: name
 * @age: age
 * @owner: owner
 *
 *Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
