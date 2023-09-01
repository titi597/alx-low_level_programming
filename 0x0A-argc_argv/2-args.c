#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argv: an array that has the command line.
 * @argc: number of arguments of command line.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
