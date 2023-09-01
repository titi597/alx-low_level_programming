#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argv: an array that has the command line.
 * @argc: number of arguments of command line.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
