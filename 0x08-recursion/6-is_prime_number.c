#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (_prime_s(n, 2));
}

/**
 * _prime_s - searching if the number is prime
 * @i: number which will be divided
 * @j: dividor
 * Return: 0 (success)
 */

int _prime_s(int i, int j)
{
	if (i <= 1)
	{
		return (0);
	}
	if (i != j && i % j == 0)
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (_prime_s(i, j + 1));
}
