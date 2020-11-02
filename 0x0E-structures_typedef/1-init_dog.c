#include "dog.h"

/**
 * init_dog - initializes an structure of the type dog.
 * @d: given structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's guardian.
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
