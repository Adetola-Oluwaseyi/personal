#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file operated on
 * @letters: number of letters to be printed from file
 *
 * Return: number of letter actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int re, fd, wr;
	char *ptr = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	re = read(fd, ptr, letters);

	close(fd);
	if (re == -1)
		return (0);
	wr = write(STDOUT_FILENO, ptr, letters);
	if (wr == -1 || wr != letters)
		return (0);
	return (n);
}

