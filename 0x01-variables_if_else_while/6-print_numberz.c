#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit
 * numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
