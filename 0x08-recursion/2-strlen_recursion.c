#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to be printed.
 * Return: return length of string.
 */

int _strlen_recursion(char *s)
{
	int a;

	a = 0;
	if (*s != '\0')
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
