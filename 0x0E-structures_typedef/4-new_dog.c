#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates new dog
 * @name: the name of the new dog
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *dogs;

	if (name == NULL || owner == NULL)
		return (NULL);
	dogs = malloc(sizeof(dog_t));
	if (dogs == NULL)
	{
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	dogs->name = malloc(sizeof(char) * (a + 1));
	dogs->owner = malloc(sizeof(char) * (b + 1));

	if (dogs->name == NULL || dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs->owner);
		free(dogs);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		dogs->name[c] = name[c];
	for (c = 0; c <= b; c++)
		dogs->owner[c] = owner[c];
	dogs->age = age;
	return (dogs);
}
