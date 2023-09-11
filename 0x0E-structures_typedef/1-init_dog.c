#include "dog.h"
#include <stddef.h>

/**
 * init_dog - dog initialization
 * @d: dog pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
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
