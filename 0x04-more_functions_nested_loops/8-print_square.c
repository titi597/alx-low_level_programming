#include "main.h"

/**
 * print_square - function that prints a square
 * @size: input square
 * Return: void
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 0 ; a < size ; a++)
	{
		if (size > 0)
		{
			for (b = 0 ; b < size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
