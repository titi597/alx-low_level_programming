#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: an array
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int aptr = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			aptr = aptr * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (aptr);
}

