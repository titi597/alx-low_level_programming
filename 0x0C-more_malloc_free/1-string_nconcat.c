#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- a function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c = 0, d = 0;
	char *k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c])
	{
		c++;
	}
	while (s2[d])
	{
		d++;
	}

	if (n >= d)
		n = d;

	{
		k = malloc(sizeof(char) * (c + n + 1));
	}

	if (k == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < c; a++)
		k[a] = s1[a];
	for (b = 0; b < n; b++)
		k[a + b] = s2[b];

	k[a + b] = '\0';
	return (k);
}
