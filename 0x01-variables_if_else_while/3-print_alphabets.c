#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in lower and
 * uppercase followed by a newline
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int a = 97; a <= 122; a++)
	{
		char m = a;

		putchar(m);
	}
	for (int a = 65; a <= 90; a++)
	{
		char m = a;

		putchar(m);
	}
	putchar('\n');
	return (0);
}

