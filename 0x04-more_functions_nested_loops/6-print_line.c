#include "main.h"

/**
 * print_line - fucntion that draws a straight line in the terminal
 * @n: input integer
 * Return: void
 */

void print_line(int n)
{
	int a;

	for (a = 0 ; a < n ; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
