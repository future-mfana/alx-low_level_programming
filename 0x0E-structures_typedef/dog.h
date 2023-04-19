#include <stdio.h>
#include "dog.h"

/**
 * struct dog - type of the dog's information.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
