#include "main.h"

/**
 * error_aptr - function that exit the error.
 * @file_from: an array source
 * @file_to: an array destination
 * @argv: a pointer to an array
 */
void error_aptr(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function that handles argumnets
 * @argc: pointer to an array of source file
 * @argv: direction of poitner to an array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_exit;
	char buffer[1024];
	ssize_t tb_read, tb_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_aptr(file_from, file_to, argv);

	tb_read = 1024;
	while (tb_read == 1024)
	{
		tb_read = read(file_from, buffer, 1024);
		if (tb_read == -1)
			error_aptr(-1, 0, argv);
		tb_written = write(file_to, buffer, tb_read);
		if (tb_written == -1)
			error_aptr(0, -1, argv);
	}
	error_exit = close(file_from);
	if (error_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_exit = close(file_to);
	if (error_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

