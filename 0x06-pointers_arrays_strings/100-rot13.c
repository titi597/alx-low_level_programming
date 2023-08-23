#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @c: string to be encodes using rot13.
 * Return: string encoded
 */

char *rot13(char *c)
{
	int a;
	int b;
	char x[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char y[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (c[a] == x[b])
			{
				c[a] = y[b];
				break;
			}
		}
	}
	return (c);
}
