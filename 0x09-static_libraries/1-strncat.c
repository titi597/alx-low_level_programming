#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: source of string
 * @dest: destination of string
 * @n: number of bytes from source
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}
	for (b = 0 ; src[b] != 0 && b < n ; b++)
	{
		dest[a + b] = src[b];
	}

	return (dest);
}
