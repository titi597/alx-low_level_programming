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
	float x;
	unsigned long fib1 = 0, fib2 = 1, y;

	while (1)
	{
		y = fib1 + fib2;
	if (y > 4000000)
	{
		break;
	}
	if ((y % 2) == 0)
	{
		x += y;
		fib1 = fib2;
		fib2 = y;
	}
	}
	printf("%.0f\n", x);

	return (0);
}
