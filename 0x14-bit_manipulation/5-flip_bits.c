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
	unsigned int w = 0;
	unsigned long int v = n ^ m;

	while (v > 0)
	{
		w += v & 1;
		v >>= 1;
	}
	return (w);
}
