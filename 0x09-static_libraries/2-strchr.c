#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @c: the first occurrence of the character.
 * @s: string.
 * Return: a pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
