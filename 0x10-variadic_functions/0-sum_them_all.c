#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: parameters being passed to the function.
 * @...: variable that calculate the sum of numbers.
 * Return: If n == 0 it gives back 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int a;
	va_list avatar;

	va_start(avatar, n);

	if (n == 0)
	{
		return (0);
	}

	for (a = 0; a < n; a++)
		sum += va_arg(avatar, int);

	va_end(avatar);

	return (sum);
}
