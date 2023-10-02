#include "main.h"
#include <stdarg.h>

#define BUFFER_SIZE 1024
/**
 * openFile - Open a file and handle errors.
 * @file_name: the name of the file
 * @flags: flags to be handled
 * @mode: mode to be handled
 * Return: fd
 */
int openFile(const char *file_name, int flags, mode_t mode)
{
	int fd = open(file_name, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_name);
		exit(98);
	}
	return (fd);
}

/**
 * closeFile - Close a file and handle errors.
 * @fd: ....
 */
void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copyFile - a program that copies the content of a file to another file
 * @file_from: source of file to be copied
 * @file_to: destinationof copied file
 */

void copyFile(const char *file_from, const char *file_to)
{
	int fd_from = openFile(file_from, O_RDONLY, 0664);
	int fd_to = openFile(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			closeFile(fd_from);
			closeFile(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		closeFile(fd_from);
		closeFile(fd_to);
		exit(98);
	}
	closeFile(fd_from);
	closeFile(fd_to);
}
/**
 * main - main function
 * @argc: argument of an array
 * @argv: pointer to an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyFile(argv[1], argv[2]);
	return (0);
}
