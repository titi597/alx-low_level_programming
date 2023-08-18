#include <stdio.h>

/**
 * main - print the largest prime factor of
 * number
 * Return: 0 (success)
 */

int main(void)
{
	long int a, n, b;

	n = 612852475143;
	for (a = 1; a <= n; a++)
	{
		if (n % a == 0)
		{
			if (n == a)
			{
				printf("%ld\n", a);
				break;
			}
			b = n / a;
			n = b;
		}
	}

	return (0);
}
