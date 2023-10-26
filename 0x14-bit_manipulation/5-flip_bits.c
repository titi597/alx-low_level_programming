#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first variable
 * @m: second variable
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int vamos = n ^ m;
	unsigned int aptr = 0;

	while (vamos)
	{
		aptr += vamos & 1;
		vamos >>= 1;
	}

	return (aptr);
}

