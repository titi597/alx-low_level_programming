#include "main.h"

/**
 * _sqrt_recursion - a function that returns natural square root of a number.
 * @n: number
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find natural square root of number.
 * @n: number.
 * @a: number to be used for finding square root.
 * Return: the natural square root of a number.
 */

int _sqrt(int n, int a)
{
	int b;

	b = a * a;
	if (b > n)
		return (-1);
	if (b == n)
		return (a);
	return (_sqrt(n, a + 1));
}
