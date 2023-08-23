#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @c: string to be encoded in 1337
 * Return: string encoded
 */

char *leet(char *c)
{
	int a;
	int b;
	char x[] = {"aAeEoOtTlL"};
	char y[] = {"4433007711"};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (c[a] == x[b])
			{
				c[a] = y[b];
			}
		}
	}
	return (c);
}
