#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int titi;
	ssize_t byteswritten;

	if (filename == NULL)
	{
		return (-1);
	}

	titi = open(filename, O_WRONLY | O_APPEND);

	if (titi == -1)
	{
		titi = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

		if (titi == -1)
		{
			return (-1);
		}
	}

	if (text_content == NULL)
	{
		close(titi);
		return (1);
	}

	byteswritten = write(titi, text_content, strlen(text_content));

	if (byteswritten == -1)
	{
		close(titi);
		return (-1);
	}
	close(titi);
	return (1);
}

