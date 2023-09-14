#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - a function that prints numbers, followed by a new line.
 * @n: integers passed to the function.
 * @...: numbers being printed
 * @separator: is the string to be printed between numbers.
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list avatar;
	unsigned int a;
	char *ptr;

	va_start(avatar, n);

	for (a = 0; a < n; a++)
	{
		ptr = va_arg(avatar, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(avatar);
}
