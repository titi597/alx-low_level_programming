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
	char *ptr = (char *)format, *apt = "", *pvr;
	int a;

	va_start(avatar, format);

	while (ptr && *ptr)
	{
		if (*ptr == 'c')
		{
			printf("%s%c", apt, va_arg(avatar, int));
		}
		else if (*ptr == 'i')
		{
			printf("%s%d", apt, va_arg(avatar, int));
		}
		else if (*ptr == 'f')
		{
			printf("%s%f", apt, va_arg(avatar, double));
		}
		else if (*ptr == 's')
		{
			pvr = va_arg(avatar, char *);
			if (pvr == NULL)
				printf("%s(nil)", apt);
			else
			{
				printf("%s%s", apt, pvr);
			}
		}
		a = 0;
		if (a == 0)
		{
			apt = ", ";
		}
		ptr++;
		a++;
	}
	printf("\n");
	va_end(avatar);
}
