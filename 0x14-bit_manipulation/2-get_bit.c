#include "main.h"

/**
 * get_bit - function that returns the value of a bit of given index.
 * @n: number
 * @index: the index starting from 0 of the bit you want to get.
 * Return: the value of the bit of index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int apts, aptr;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	apts = 1 << index;
	aptr = n & apts;
	if (aptr == apts)
		return (1);
	return (0);
}
