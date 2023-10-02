#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the name of file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *apts;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	FILE *titi;

	if (filename == NULL)
		return (0);
	titi = fopen(filename, "r");

	if (titi == NULL)
		return (0);
	apts = (char *)malloc(letters + 1);
	if (apts == NULL)
	{
		fclose(titi);
		return (0);
	}

	bytesRead = fread(apts, 1, letters, titi);

	if (bytesRead <= 0)
	{
		free(apts);
		fclose(titi);
		return (0);
	}
	apts[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, apts, bytesRead);

	if (bytesWritten != bytesRead)
	{
		free(apts);
		fclose(titi);
		return (0);
	}
	free(apts);
	fclose(titi);
	return (bytesWritten);
}
