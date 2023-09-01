#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argv: an array that has the command line.
 * @argc: number of arguments of command line.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int y = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		y += atoi(argv[a]);
	}
	printf("%d\n", y);
	return (0);
}
