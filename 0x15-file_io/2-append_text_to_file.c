#include "main.h"
/**
 * append_text_to_file -- appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be added
 *
 * Return: 1 on success, -1 faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	if (i > 0)
		w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
