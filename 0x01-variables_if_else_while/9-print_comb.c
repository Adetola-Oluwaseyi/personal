#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
