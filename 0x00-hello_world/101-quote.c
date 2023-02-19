#include<stdio.h>

/**
 * main - entry point
 *
 * Description: Prints string to standard error
 * Return: returns 1
 */

int main(void)
{
	char stor[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", stor);
	return (1);
}

