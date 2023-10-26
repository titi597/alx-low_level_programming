#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: variable assigned to represent binary number.
 */

void print_binary(unsigned long int n)
{
	unsigned int aptr = 0;
	unsigned long int vam;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	vam = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (vam > 0)
	{
		if ((n & vam) == 0)
		{
			if (aptr)
			{
				_putchar('0');
			}
		} else
		{
			_putchar('1');
			aptr = 1;
		}
		vam >>= 1;
	}
}

