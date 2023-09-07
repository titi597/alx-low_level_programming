#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isdigit - fucntion that checks if the string is containing digits
 * @str: string
 * Return: 1 is digit and if else non digit 0.
 */
int _isdigit(char *str)
{
	int p = 0;

	while (str[p])
	{
		if (str[p] < '0' || str[p] > '9')
			return (0);
		p++;
	}
	return (1);
}

/**
 * _strlen - returing string length
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int p = 0;

	for (; str[p] != '\0'; p++)
	{
	}
	return (p);
}
/**
 * errors - handle the main errors.
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - a program that multiplies two positive numbers.
 * @argc: an array of pointers passed along the arugemnts
 * @argv: quantity of arguments passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *a = NULL, *b = NULL;
	int i, j, k, l, m, n, o, *result, r = 0;

	if (argc != 3)
		errors();
	a = argv[1], b = argv[2];
	if (!_isdigit(a) || !_isdigit(b))
		errors();
	i = _strlen(a), j = _strlen(b);
	k = i + j;
	{
		result = malloc(sizeof(int) * (k + 1));
	}
	if (!result)
		return (1);
	for (l = 0; l <= k; l++)
		result[l] = 0;
	for (i = i - 1; i >= 0; i--)
	{
		n = a[i] - '0';
		m = 0;
		for (j = _strlen(b) - 1; j >= 0; j--)
		{
			o = b[j] - '0';
			m += result[i + j + 1] + (n * o);
			result[i + j + 1] = m % 10;
			m /= 10;
		}
		if (m > 0)
			result[i + j + 1] += m;
	}
	for (l = 0; l < k; l++)
	{
		if (result[l])
			r = 1;
		if (r)
			_putchar(result[l] + '0');
	}
	if (!r)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
