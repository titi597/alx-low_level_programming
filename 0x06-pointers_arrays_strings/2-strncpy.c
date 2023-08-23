#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @src: source of string
 * @dest: destination of string
 * @n: strings to be copied
 * Return: pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
		if (a < n)
			dest[a] = src[a];
	}
	for (a = a; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
