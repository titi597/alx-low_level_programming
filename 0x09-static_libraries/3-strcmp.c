#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string one
 * @s2:string two
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int y = 0;

	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		if (y == 0)
			y = s1[x] - s2[x];
	}

	return (y);
}
