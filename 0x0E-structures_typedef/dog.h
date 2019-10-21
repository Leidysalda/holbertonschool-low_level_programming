#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Initial data
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Description: Struct Dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
