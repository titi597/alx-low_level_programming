#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of an array.
 * @c: an array of chars.
 * Return: NULL if size = 0, and a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);

}
