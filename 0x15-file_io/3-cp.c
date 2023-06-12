#include "main.h"
/**
 * main -- copies content of a file to another file
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int f1, f2, w, r, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	while ((r = read(f1, buffer, 1024)) > 0)
		w = write(f2, buffer, r);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	c1 = close(f1);
	c2 = close(f2);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
