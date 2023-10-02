#include "main.h"
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * exitWithError - function that exits with an error
 * @code: code that encycript message
 * @format: the message format
 * @...: additional arguments for message
 */

void exitWithError(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	fprintf(stderr, "\n");
	exit(code);
}
/**
 * copyFile - a program that copies the content of a file to another file
 * @file_from: source of file to be copied
 * @file_to: destinationof copied file
 * Return: 0 (success)
 */
int copyFile(const char *file_from, const char *file_to)
{
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exitWithError(98, "Error: Can't read from file %s", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exitWithError(99, "Error: Can't write to file %s", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			exitWithError(99, "Error: Can't write to file %s", file_to);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exitWithError(98, "Error: Can't read from file %s", file_from);
	}
	if (close(fd_from) == -1)
		exitWithError(100, "Error: Can't close fd %d", fd_from);
	if (close(fd_to) == -1)
		exitWithError(100, "Error: Can't close fd %d", fd_to);
	return (0);
}
/**
 * main - main function
 * @argc: argument of an array
 * @argv: pointer to an array
 * Return: copyFile(file_from, file_to).
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		exitWithError(97, "Usage: cp file_from file_to");
	}
	return (copyFile(file_from, file_to));
}

