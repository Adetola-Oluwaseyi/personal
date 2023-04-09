#include "main.h"

/**
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
		wr = write(op, text_content, sizeof(*text_content));
		if (wr == -1)
			return (-1);
	}

	return (1);
}

