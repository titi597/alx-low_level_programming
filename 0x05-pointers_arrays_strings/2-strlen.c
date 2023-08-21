#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: counted string
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	int y = 0;

	for (a = 0 ; s[y] != '\0' ; a++)
		y++;
	return (y);
}
