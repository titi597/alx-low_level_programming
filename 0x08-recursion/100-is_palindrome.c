#include "main.h"

/**
 * is_strlen_recursion - a function that will compare the string characters.
 * @s: string.
 * Return: returning the length of the string
 */

int is_strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + is_strlen_recursion(s + 1));
}

/**
 * is_compare_string - a function that will compare the string characters.
 * @s: string
 * @a: smallest number
 * @b: largest number
 * Return: int
 */

int is_compare_string(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b)
		{
			return (1);
		}
		else if (a == b + 1)
		{
			return (1);
		}
		else
			return (0 + is_compare_string(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that returns 1 if is a palindrome and 0 if not.
 * @s: string for making palindrome.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);

	}
	return (is_compare_string(s, 0, is_strlen_recursion(s) - 1));
}
