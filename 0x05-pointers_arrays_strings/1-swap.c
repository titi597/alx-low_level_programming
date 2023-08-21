#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
