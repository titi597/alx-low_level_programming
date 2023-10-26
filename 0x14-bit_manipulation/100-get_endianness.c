#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int aptr = 1;
	char *d_byte = (char *)&aptr;

	return ((*d_byte == 1) ? 1 : 0);
}

