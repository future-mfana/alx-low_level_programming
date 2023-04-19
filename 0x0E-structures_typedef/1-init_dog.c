#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A new type describing the dog.
 * @d: the dog to be initialized
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

