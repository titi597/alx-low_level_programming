#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string.
 * @needle: first occurrence of the substring.
 * Return: a pointer to the beginning of the located substring, or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *a = haystack, *b = needle;

		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (!*b)
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
