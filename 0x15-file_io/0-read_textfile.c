#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a file and print to stdout
 * @filename: file to be read
 * @letters: letters to be read
 * Return: r- number of bytes to be read and printed
 * 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t r;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	r = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (r);
}
