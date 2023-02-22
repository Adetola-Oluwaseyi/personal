#include <stdio.h>

/**
 * sum_even -  finds and prints the sum of the even-valued terms
 * of a Fibonacci sequence whose values do not exceed 4,000,000,
 */
void sum_even(void)
{
	int next = 0;
	int first = 1;
	int second = 2;
	int add = 2;

	while (next <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;

		if ((next % 2) == 0)
		{
			add += next;
		}
	}
	printf("%d\n", add);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	sum_even();
	return (0);
}
