#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: argument passed to pointer
 * @argv: pointer to an array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *function_ptr = (unsigned char *)main;

	for (a = 0; a < bytes; a++)
	{
		printf("%.2x", function_ptr[a]);

		if (a == bytes - 1)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
