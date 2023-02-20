#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in lowercase except q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int a = 97; a <= 122; a++)
	{
		char m = a;

		if ((m == 'q') || (m == 'e'))
		{
		}
		else
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}

