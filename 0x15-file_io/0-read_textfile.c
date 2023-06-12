#include "main.h"
/**
 * read_textfile -- function that reads a text and prints it to POSIX
 * standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_r;
	ssize_t bytes_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_r = read(filename, buffer, letters);

	if (bytes_r == -1)
		return (0);

	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (bytes_w);
}
