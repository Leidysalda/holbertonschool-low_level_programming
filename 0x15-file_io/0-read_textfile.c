#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it.
 *
 * @filename: file
 * @letters: size file
 *
 * Return:  bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, count;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	size = read(fd, buf, letters);

	if (size == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	count = write(2, buf, size);

	free(buf);
	close(fd);
	if (count != size)
		return (0);
	return (size);
}
