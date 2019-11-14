#include "holberton.h"
/**
 * append_text_to_file - function that add a file.
 *
 * @filename: name of the file which you want to create.
 * @text_content: indicates permissions of new file.
 *
 * Return:  0, 1, 2 or -1 upon failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t new, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND,
		  S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	new = write(fd, text_content, sizeof(text_content));
	close(fd);
	if (new == -1)
		return (-1);

	return (1);
}
