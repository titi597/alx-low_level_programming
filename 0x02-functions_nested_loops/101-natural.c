#include "main.h"
#include <stdio.h>

/**
 * main - Enrty point for printing multiple of 3 or 5
 *
 * Description: the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0 (success)
 */

int main(void)
{
	int x, y;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
			x += y;
	}
	printf("%d\n", x);

	return (0);
}
