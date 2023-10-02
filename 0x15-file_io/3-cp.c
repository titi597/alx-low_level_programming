#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_buffer - allocating buffer size of 1024 bytes.
 * @file: the name of file
 *
 * Return: a pointer to the newly allocated size of buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * closeFile - function that closes afile
 * @fd: the closed file
 */
void closeFile(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
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
	int aptr, apts, titi, titi2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	aptr = open(argv[1], O_RDONLY);
	apts = read(aptr, buffer, 1024);
	titi = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (aptr == -1 || apts == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		titi2 = write(titi, buffer, apts);
		if (titi == -1 || titi2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		apts = read(aptr, buffer, 1024);
		titi = open(argv[2], O_WRONLY | O_APPEND);
	} while (apts > 0);

	free(buffer);
	closeFile(aptr);
	closeFile(titi);

	return (0);
}

