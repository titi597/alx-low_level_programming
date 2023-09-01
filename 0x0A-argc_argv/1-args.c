#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: an array that has the command line.
 * @argc: number of arguments of command line.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
