#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals.
 * @a: string
 * @size: size of string
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int j;

	for (j = 0; j < size; j++)
	{
		x += a[j * size + j];

		y += a[j * size + (size - 1 - j)];
	}
	printf("%d", x);
	printf(", ");
	printf("%d", y);
	printf("\n");
}
