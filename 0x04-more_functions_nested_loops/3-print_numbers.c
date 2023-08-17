#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x < 10);
	_putchar('\n');
}
