#include "main.h"

/**
 * read_textfile- function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename:text file.
 * @letters:letters being read.
 * Return:actual n0 of letters it could read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t r;
	ssize_t w;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);

	return (w);

}
