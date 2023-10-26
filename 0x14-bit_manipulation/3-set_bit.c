#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: first variable which is pointer to an array.
 * @index: second variable
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int vam = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= vam;
	return (1);
}

