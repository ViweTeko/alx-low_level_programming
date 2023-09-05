#include "main.h"

/**
 * read_textfile - reads a textfile and prints
 * @filename: the file
 * @letters: number of letters
 *
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fn, wr, rd;
	char *a;

	fn = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	a = malloc(sizeof(char) * letters);
	rd = read(fn, a, letters);
	wr = write(STDOUT_FILENO, a, rd);

	free(a);
	close(fn);

	return (wr);
}
