#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list avatar;
	char *apt = "", *pvr;
	int a;

	va_start(avatar, format);

	if (format)
	{
		a = 0;
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", apt, va_arg(avatar, int));
					break;
				case 'i':
					printf("%s%d", apt, va_arg(avatar, int));
					break;
				case 'f':
					printf("%s%f", apt, va_arg(avatar, double));
					break;
				case 's':
					pvr = va_arg(avatar, char *);
					printf("%s%s", apt, (pvr ? pvr : "(nil)"));
					break;
				default:
					a++;
					continue;
			}
			apt = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(avatar);
}
