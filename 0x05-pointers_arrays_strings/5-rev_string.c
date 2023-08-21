#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int b = 0;
	char x;

	for (a = 0 ; s[a] != '\0' ; a++)
		b++;
	for (a = 0 ; a < b / 2 ; a++)
	{
		x = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = x;
	}
}

