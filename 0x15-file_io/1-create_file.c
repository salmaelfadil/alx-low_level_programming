#include "main.h"
/**
 * create_file -- function that creates a file
 * @filename: name of the file
 * @text_content: text
 *
 * Return: 1 on success, -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	
	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
