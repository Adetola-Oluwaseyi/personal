#include <stdio.h>

/**
 * natural - computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 */
void natural(void)
{
	int i;
	int ans = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			ans += i;
		}
	}
	printf("%d\n", ans);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	natural();
	return (0);
}

