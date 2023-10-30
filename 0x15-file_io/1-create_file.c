#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to an array of name of file.
 * @text_content: pointer to an array of content.
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”, etc)
 */
int create_file(const char *filename, char *text_content)
{
	int aptr;

	aptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}

	if (aptr == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t tbyWritten;

		tbyWritten = write(aptr, text_content, strlen(text_content));

		if (tbyWritten == -1)
		{
			close(aptr);
			return (-1);
		}
	}
	close(aptr);
	return (1);
}

