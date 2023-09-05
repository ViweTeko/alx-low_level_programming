#include "main.h"

/**
 * main - copies a file
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *a;
	int rd, wr, b, c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	a = a_buffer(argv[2]);
	b = open(argv[1], O_RDONLY);
	rd = read(b, a, 1024);
	c = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (rd == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(a);
			exit(98);
		}
		wr = write(c, a, rd);

		if (wr == -1 || c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(a);
			exit(99);
		}
		rd = read(b, a, 1024);
		c = open(argv[2], O_RDONLY | O_APPEND);
	} while (rd > 0);

	free(a);
	closure(b);
	closure(c);

	return (0);
}

/**
 * a_buffer - allocates memory for a buffer
 * @a: nmae of buffer
 *
 * Return: a
 */
char *a_buffer(char *a)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}

	return (b);
}

/**
 * closure - closes the file
 * @a: file to be closed
 */
void closure(int a)
{
	int b;

	b = close(a);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}
