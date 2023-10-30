#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: a pointer to an array of named file.
 * @text_content: a pointer to an array of content.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int aptr = open(filename, O_WRONLY | O_APPEND);

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
		ssize_t vamos = write(aptr, text_content, strlen(text_content));

		if (vamos == -1)
		{
			close(aptr);
			return (-1);
		}
	}
	close(aptr);
	return (1);
}

