#include <stdio.h>
#include <stdlib.h>

int find_digit(char *);
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if all numbers passed are digits
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if((find_digit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);
}

/**
 * find_digit - checks if argument is digit
 * @s: string argument
 *
 * Return: 1 if argument is not a digit
 */
int find_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((int) s[i] >= 48 && (int) s[i] <= 57))
		{
			return (1);
		}
	}
	return (0);
}

