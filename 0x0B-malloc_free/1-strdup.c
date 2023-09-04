#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string str.
 * NULL if str = NULL
 */

char *_strdup(char *str)
{
	int a;
	int j;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		a++;
	}
	b = malloc(sizeof(char) * a + 1);

	if (b == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		b[j] = str[j];
	}
	return (b);

}
