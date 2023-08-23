#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: an integer to be printed
 * Return: 0 (success)
 */

void print_number(int n)
{
	unsigned long int a;

	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
