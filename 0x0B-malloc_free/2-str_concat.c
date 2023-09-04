#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	char *d;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	a = 0;
	for (c = 0; s1[c] != '\0'; c++)
	{
		a++;
	}
	b = 0;
	for (c = 0; s2[c] != '\0'; c++)
	{
		b++;
	}
	d = malloc(sizeof(char) * (a + b) + 1);

	if (d == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		d[c] = s1[c];
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		d[a + c] = s2[c];
	}
	return (d);

}
