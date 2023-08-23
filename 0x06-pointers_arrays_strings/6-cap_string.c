#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @c: string to be capitalized
 * Return: changed string
 */

char *cap_string(char *c)
{
	int x;
	int y;
	char z[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (x = 0; c[x] != '\0'; x++)
	{
		if (x == 0 && c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 32;
		}
	for (y = 0; z[y] != '\0'; y++)
	{
		if (z[y] == c[x] && (c[x + 1] >= 'a' && c[x + 1] <= 'z'))
		{
			c[x + 1] = c[x + 1] - 32;
		}
	}
	}
	return (c);
}
