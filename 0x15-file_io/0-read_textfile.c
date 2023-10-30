#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to an array
 * @letters: an array
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int aptr;
	ssize_t tbRead;
	ssize_t tbyWritten;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	aptr = open(filename, O_RDONLY);

	if (aptr == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	tbRead = read(aptr, buffer, letters);
	tbyWritten = write(STDOUT_FILENO, buffer, tbRead);

	close(aptr);
	free(buffer);
	return (tbyWritten);
}

