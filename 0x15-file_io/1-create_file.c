#include "main.h"

/**
 * create_file - creates a file with read and write permissions
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}

