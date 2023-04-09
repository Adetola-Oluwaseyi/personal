#include "main.h"

/**
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, app;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
		app = write(op, text_content, strlen(text_content));
	if (app == -1)
	return (-1);
	close(op);

	return (1);
}

