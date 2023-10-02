#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int titi = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (titi == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t byteswritten = write(titi, text_content, strlen(text_content));

		if (byteswritten == -1)
		{
			close(titi);
			return (-1);
		}
	}
	close(titi);
	return (1);
}

