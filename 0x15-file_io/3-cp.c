#include "main.h"
#include <stdio.h>
/**
 * error_file - check if file is opened and handle errors
 * @file_from: sourcefofile to copy from and to check
 * @file_to: destination file to copy to
 * @argv: pointer to an array
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		perror("Error");
		exit(99);
	}
}
/**
 * main - copy content of a file from one to another
 * @argc: an array
 * @argv: pointer to an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, titi;
	ssize_t apts, aptr;
	char buffers[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	apts = 1024;
	while (apts == 1024)
	{
		apts = read(file_from, buffers, 1024);
		if (apts == -1)
			error_file(-1, 0, argv);
		aptr = write(file_to, buffers, apts);
		if (aptr == -1)
			error_file(0, -1, argv);
	}
	titi = close(file_from);
	if (titi == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	titi = close(file_to);
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
