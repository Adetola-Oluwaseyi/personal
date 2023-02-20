#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 * Return: always 0 (success)
 */

int main(void)
{
	for (int a = 0; a < 9; a++)
	{
		for (int b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

