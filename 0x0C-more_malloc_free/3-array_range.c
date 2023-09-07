#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value contained by an array.
 * @max: maximum value contained by an array
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *v;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}

	v = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (v == NULL)
	{
		return (NULL);
	}

	for (; min <= max; min++)
	{
		v[j] = min;
		j++;
	}

	return (v);
}
