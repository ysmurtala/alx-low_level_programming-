#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that Read text file and print to STDOUT.
 * @filename: read text file
 * @letters: no. of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t d;
	ssize_t a;
	ssize_t b;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(d, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(d);
	return (a);
}

