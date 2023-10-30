#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
	FILE *aptr = fopen(filename, "r");
	char *vam = (char *)malloc(letters + 1);
	ssize_t tbyRead = fread(vam, 1, letters, aptr);
	ssize_t tbyWritten = write(STDOUT_FILENO, vam, tbyRead);

	if (filename == NULL)
	{
		return (0);
	}
	if (aptr == NULL)
	{
		return (0);
	}
	if (vam == NULL)
	{
		fclose(aptr);
		return (0);
	}
	if (tbyRead < 0)
	{
		fclose(aptr);
		free(vam);
		return (0);
	}

	vam[tbyRead] = '\0';

	if (tbyWritten < 0 || (size_t)tbyWritten != (size_t)tbyRead)
	{
		fclose(aptr);
		free(vam);
		return (0);
	}
	fclose(aptr);
	free(vam);
	return (tbyWritten);
}

