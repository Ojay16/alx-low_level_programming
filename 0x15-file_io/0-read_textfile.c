#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: num of letters to be read
 * Return: w- actual num of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t oj;
	ssize_t w;
	ssize_t t;

	oj = open(filename, O_RDONLY);
	if (oj == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(oj, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(oj);
	return (w);
}
