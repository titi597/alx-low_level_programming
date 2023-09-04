#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to an array
 * @height: height of an array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		a++;
		free(grid[a]);
	}
	free(grid);
}
