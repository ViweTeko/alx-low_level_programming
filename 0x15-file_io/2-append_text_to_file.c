#include "main.h"

/**
 * append_text_to_file - Appends text to existing file
 * @filename: name of file
 * @text_content: text in the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, wr, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ln])
			++ln;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	wr = write(a, text_content, ln);
	if (a == -1 || wr == -1)
		return (-1);
	close(a);

	return (1);
}
