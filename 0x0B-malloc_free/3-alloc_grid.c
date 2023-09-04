#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers.
 *
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **result;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		return (NULL);
	}
	a = 0;
	for (a = 0; a < height; a++)
	{
		result[a] = malloc(sizeof(int) * width);

		if (result[a] == NULL)
		{
			free(result);
			b = 0;
			for (b = 0; b <= height; b++)
			{
				free(result[b]);
			}
			return (NULL);
		}
		for (b = 0; b < width; b++)
			result[a][b] = 0;
	}
	return (result);
}
