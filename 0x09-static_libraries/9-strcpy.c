#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination of string
 * @src: source of string
 * Return: dest (succes)
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
