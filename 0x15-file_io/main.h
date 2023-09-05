#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *a_buffer(char *a);
void closure(int a);

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
#endif
