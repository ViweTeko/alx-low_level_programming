#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of file
 * @text_content: writes to file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fn, wr, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ln])
			++ln;
	}

	fn = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	wr write(fn, text_content, ln);
	if (fn == -1 || wr == -1)
		return (-1);
	close(fn);

	return (1);
}
