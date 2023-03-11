#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it receives two arguments
 * 1 otherwise
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (!argv[2])
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

