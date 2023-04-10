#include "main.h"
/**
 * buff - creates a buffer
 * @arg2: string argument
 *
 * Return: address to the buffer
 */
char *buff(char *arg2)
{
	char *buf = malloc(1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg2);
		exit(99);
	}
	return (buf);
}
/**
 * close_op - closes a file
 * @fd: file descriptor of the file
 */
void close_op(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_f1 - opens the first file passed into the program
 * @v: name of the file
 *
 * Return: file descriptor of opened file
 */
int open_f1(char *v)
{
	int fd1;

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	return (fd1);
}

/**
 * open_f2 - opens the second file passed into the program
 * @v: name of the file
 *
 * Return: file descriptor of opened file
 */
int open_f2(char *v)
{
	int fd2;

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	return (fd2);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0 (successful)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, re, wr, cl1, cl2;
	char *buff = buff(argv[2]);
	char *err = "Usage: cp file_from file_to\n";

	if (argc != 3)
	{
		write(STDERR_FILENO, err, strlen(err));
		free(buff);
		exit(97);
	}
	fd1 = open_f1(argv[1]);
	fd2 = open_f2(argv[2]);

	while (read(fd1, buff, 1024))
	{
		re = read(fd1, buff, 1024);
		if (re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fd2, buff, 1024);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_op(fd1);
	close_op(fd2);
	free(buff);
	return (0);
}

