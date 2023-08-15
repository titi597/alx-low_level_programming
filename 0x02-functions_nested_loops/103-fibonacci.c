#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the sum of even fibonacci numbers not exceed 4 million
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, sum = z;

	while (z + y < 4000000)
	{
		z += y;
		if (z % 2 == 0)
			sum += z;
		y = z - y;
		x++;
	}
	printf("%ld\n", sum);
	return (0);
}
