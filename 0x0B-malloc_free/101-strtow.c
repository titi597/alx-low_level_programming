#include "main.h"
#include <stdlib.h>
/**
 * t_free_grid - a function that frees a 2 dimensional grid.
 * @grid: pointer to an array
 * @height: height of an array
 * Return: void
 */
void t_free_grid(char **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);

}
/**
 * strtow - a function that splits a string into words.
 * @str: string to be splited
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **a;
	int x, y, z, height, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	{
	a = malloc(sizeof(char *) * (height + 1));
	}
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (y = d = 0; y < height; y++)
	{
		for (x = d; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				d++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				a[y] = malloc((x - d + 2) * sizeof(char));
				if (a[y] == NULL)
				{
					t_free_grid(a, y);
					return (NULL);
				}
				break;
			}
		}
		for (z = 0; d <= x; d++, z++)
			a[y][z] = str[d];
		a[y][z] = '\0';
	}
	a[y] = NULL;
	return (a);
}
