#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print out to STDOUT
 * @filename: text file to be read
 * @letters: letters to be read
 * Return: w on success or 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fo;
	ssize_t r;
	ssize_t w;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	r = read(fo, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fo);
	return (w);
}
