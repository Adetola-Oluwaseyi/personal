#include <stdio.h>

/**
 * fibo_num - prints the first 98 Fibonacci numbers
 */
void fibo_num(void)
{
	int i;
	unsigned long long next;
	unsigned long long int first = 1;
	unsigned long long int second = 2;

	printf("%lld, %lld, ", first, second);
	for (i = 0; i < 96; i++)
	{
		next = first + second;
		if (i == 95)
		{
			printf("%lld", next);
		}

		else
		{
			printf("%lld, ", next);
		}
		first = second;
		second = next;
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	fibo_num();
	return (0);
}
