#include "main.h"

/**
 * flip_bits - function that return number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, w = 0;
	unsigned long int apts;
	unsigned long int aptr = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		apts = aptr >> v;
		if (apts & 1)
			w++;
	}
	return (w++);
}
