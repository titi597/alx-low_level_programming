#include "main.h"
#include <stdarg.h>
/**
 * exitWithError - functions that exit with an error
 * @exitCode: exiting code
 * @format: format to be used
 * @...: message of code
 */

void exitWithError(int exitCode, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	exit(exitCode);
}
/**
 * error_file - check if file is opened and handle errors
 * @file_from: source of file
 * @file_to: destination of file
 * @argv: point to an array
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		exitWithError(98, "Error: can't read from file %s", argv[1]);
	}
	if (file_to == -1)
	{
		exitWithError(99, "Error: can't write to %s", argv[2]);
	}
}
/**
 * main - main function
 * @argc: argument of an array
 * @argv: pointer to an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	ssize_t nchars, nwr;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int file_from_fd = open(file_from, O_RDONLY);
	int file_to_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error_file(file_from_fd, file_to_fd, argv);

	if (argc != 3)
	{
		exitWithError(97, "Usage: cp file_from file_to");
	}

	nchars = 1024;

	while (nchars == 1024)
	{
		nchars = read(file_from_fd, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to_fd, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	if (close(file_from_fd) == -1)
	{
		exitWithError(100, "Error: can't close fd %d", file_from_fd);
	}
	if (close(file_to_fd) == -1)
	{
		exitWithError(100, "Error: can't close fd %d", file_to_fd);
	}
	return (0);
}
