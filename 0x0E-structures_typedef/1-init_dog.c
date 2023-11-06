#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initiazize dog
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
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
