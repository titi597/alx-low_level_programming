#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: the size of triangle
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	if (y < size - (x + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
