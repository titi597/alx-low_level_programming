#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: integers passed to the function.
 * @...: numbers being printed
 * @separator: is the string to be printed between numbers.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list avatar;
	unsigned int a;
	int number;

	va_start(avatar, n);

	for (a = 0; a < n; a++)
	{
		number = va_arg(avatar, int);
		printf("%d", number);

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(avatar);
}
