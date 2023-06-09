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
	ssize_t fd, bytes_r, bytes_w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	bytes_r = read(fd, buffer, letters);

	if (bytes_r == -1)
		return (0);

	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	close(fd);

	return (bytes_w);
}
