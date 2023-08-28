#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: string with value to be pointed.
 * @to: a char of ssts of value will be pointed
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
