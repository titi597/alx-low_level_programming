#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multipying two positive numbers
 * @c: first number
 * @d: second number
 * Return: the product of two numbers
 */
int multiply(int c, int d)
{
	return (c * d);
}

/**
 * isNumber - fucntion that checks if the string is containing digits
 * @str: string
 * Return: 1
 */
int isNumber(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - a program that multiplies two positive numbers.
 * @argc: an array of pointers passed along the arugemnts
 * @argv: quantity of arguments passed
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *a = argv[1];
	char *b = argv[2];
	int c = atoll(a);
	int d = atoll(b);
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isNumber(a) || !isNumber(a))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(c, d);

	printf("%d\n", result);

	return (0);
}
