#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: source of string
 * @dest: destination of string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	for (a = 0 ; dest[a] != 0 ; a++)
	{
		a++;
	}

	for (b = 0 ; src[b] != 0 ; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
