#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the subtraction of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the sub of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiplication of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the mul of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the dision of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the remainder of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
