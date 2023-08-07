#include "main.h"

/**
 * create_file-a function that creates a file.
 * @filename: file to be created.
 * @text_content: a null terminated string.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
		{
			bytes_written = write(fd, text_content, 1);
			if (bytes_written == -1)
			{
				close(fd);
				return (-1);
			}
			text_content++;
		}
	}
	close(fd);
	return (1);
}
