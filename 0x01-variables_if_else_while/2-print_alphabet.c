#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
