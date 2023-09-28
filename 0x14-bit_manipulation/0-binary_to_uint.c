#include "main.h"

/**
 * binary_to_uint - a function that converts unsigned int into binary number.
 * @b: binary number
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int apts = 0;

	if (b == NULL)
		return (0);

	for (v = 0; b[v] != '\0'; v++)
	{
		if (b[v] != '0' && b[v] != '1')
		{
			return (0);
		}
		apts = (apts << 1) | (b[v] - '0');
	}
	return (apts);
}
