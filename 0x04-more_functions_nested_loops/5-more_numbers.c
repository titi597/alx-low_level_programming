#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y < 15 ; y++)
		{
			if (y >= 10)
			{
			_putchar(((y / 10) + '0'));
			}
		_putchar(((y % 10) + '0'));
		}
		_putchar('\n');
	}
}
