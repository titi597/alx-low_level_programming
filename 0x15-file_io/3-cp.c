#include "main.h"
#include <stdio.h>

/**
 * main - function that handles argumnets
 * @argc: pointer to an array of source file
 * @argv: direction of poitner to an array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_exit, tb_read, tb_written, vamos;
	unsigned int great = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	error_aptr(file_from, -1, argv[1], 'O');
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, great);
	error_aptr(file_to, -1, argv[2], 'W');

	tb_read = 1024;
	while (tb_read == 1024)
	{
		tb_read = read(file_from, buff, sizeof(buff));
		if (tb_read == -1)
			error_aptr(-1, -1, argv[1], 'O');
		tb_written = write(file_to, buff, tb_read);
		if (tb_written == -1)
			error_aptr(-1, -1, argv[2], 'W');
	}

	error_exit = close(file_from);
	error_aptr(error_exit, file_from, NULL, 'C');
	vamos = close(file_to);
	error_aptr(vamos, file_to, NULL, 'C');
	return (0);
}
/**
 * error_aptr - function that fix the error.
 * @gest: first variable
 * @dptr: second variable
 * @great: an array variable
 * @filename: a pointer to an array
 */
void error_aptr(int gest, int dptr, char *filename, char great)
{
	if (great == 'C' && gest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dptr);
		exit(100);
	}
	else if (great == 'O' && gest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (great == 'W' && gest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

