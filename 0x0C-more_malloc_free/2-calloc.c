#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for array, using malloc.
 * @nmemb: memory for an array.
 * @size: size of array.
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int f = 0, g = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	f = nmemb * size;
	a = malloc(f);

	if (a == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < f; g++)
	{
		a[g] = 0;
	}

	return (a);
}
