#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a dog struct with the given values
 * @d: pointer to dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
