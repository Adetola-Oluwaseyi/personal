#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the file it is
 * compiled from, followed by a new line
 *
 * Exit: always 0 (successful)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}

