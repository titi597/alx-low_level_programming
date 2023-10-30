#include "main.h"

/**
 * error_exit - function that exit the error.
 * @code: an array
 * @msg: a pointer to an array
 */
void error_exit(int code, const char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(code);
}

/**
 * copy_file - function that copies
 * @file_from: pointer to an array of source file
 * @file_to: direction of poitner to an array
 */
void copy_file(const char *file_from, const char *file_to)
{
	int aptr_from = open(file_from, O_RDONLY);
	int aptr_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[1024];
	ssize_t tb_read, tb_written;

	if (aptr_from == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}
	if (aptr_to == -1)
	{
		close(aptr_from);
		error_exit(99, "Error: Can't write to file");
	}
	while ((tb_read = read(aptr_from, buffer, sizeof(buffer))) > 0)
	{
		tb_written = write(aptr_to, buffer, tb_read);
		if (tb_written == -1)
		{
			close(aptr_from);
			close(aptr_to);
			error_exit(99, "Error: Can't write to file");
		}
	}
	if (tb_read == -1)
	{
		close(aptr_from);
		close(aptr_to);
		error_exit(98, "Error: Can't read from file");
	}
	if (close(aptr_from) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}
	if (close(aptr_to) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}
}
/**
 * main - main function for argument handling.
 * @argc: an array
 * @argv: pointer to an array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}
	copy_file(file_from, file_to);
	return (0);
}

