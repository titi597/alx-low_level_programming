#include "main.h"

/**
 * _strength - function that calculate b^p
 * @p: the exponent of number
 * @b: the base of number
 * Return: b^p
 */
unsigned long int _strength(unsigned int b, unsigned int p)
{
	unsigned long int nmb;
	unsigned int v;

	nmb = 1;
	for (v = 1; v <= p; v++)
		nmb *= b;
	return (nmb);
}

/**
 * print_binary - function that prints binary representation of a number.
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int apts, aptr;
	char titi;

	titi = 0;
	apts = _strength(2, sizeof(unsigned long int) * 8 - 1);
	while (apts != 0)
	{
		aptr = n & apts;
		if (aptr == apts)
		{
			titi = 1;
			_putchar('1');
		}
		else if (titi == 1 || apts == 1)
		{
			_putchar('0');
		}
		apts >>= 1;
	}
}
