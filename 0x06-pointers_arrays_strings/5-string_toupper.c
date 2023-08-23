#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string.
 * @c: string to convert
 * Return: changed string
 */

char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 32;
		}
	}
	return (c);
}
