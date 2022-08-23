#include "main.h"

/**
 * create_file - creates a file and fill it with text
 * @filename - name of file to create
 * @text_content - a string to write to the file
 *
 * Return: returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int t, i;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		while (text_content[i])
			i++;
		t = write(fd, text_content, i);
			if (t != i)
				return (-1);

	}
	close(fd);
	return (1);
}
