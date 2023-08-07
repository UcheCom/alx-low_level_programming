#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads text file and prints to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	m = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, m);

	free(buff);
	close(fd);
	return (w);
}
