#include <stdio.h>

/**
 * add - Addition
 * @a: first variable
 * @b: second variable
 * Return: addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtraction
 * @a: first variable
 * @b: second variable
 * Return: subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplication
 * @a: first variable
 * @b: second variable
 * Return: multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Division
 * @a: first variable
 * @b: second variable
 * Return: division
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero.\n");
		return (0);
	}
}

/**
 * mod - Modulo
 * @a: first variable
 * @b: second variable
 * Return: the modulo
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero.\n");
		return (0);
	}
}
