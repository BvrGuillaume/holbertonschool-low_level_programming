#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialise file
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 * @d: structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
