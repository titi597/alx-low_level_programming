#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: counts of the arguments
 * @av: the direction of the arguments
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int y, z, x = 0, d = 0;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < ac; y++)
	{
		for (z = 0; av[y][z]; z++)
			d++;
	}
	d += ac;

	a = malloc(sizeof(char) * d + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < ac; y++)
	{
		for (z = 0; av[y][z]; z++)
		{
			a[x] = av[y][z];
			x++;
		}
		if (a[x] == '\0')
		{
			a[x++] = '\n';
		}
	}
	return (a);
}
