#include <stdio.h>

/**
 * fibo_num - prints the first 98 Fibonacci numbers
 */
void fibo_num(void)
{
	int i;
	unsigned long next;
	unsigned long int first = 1;
	unsigned long int second = 2;

	printf("%ld, %ld, ", first, second);
	for (i = 0; i < 96; i++)
	{
		next = first + second;
		if (i == 95)
		{
			printf("%ld", next);
		}

		else
		{
			printf("%ld, ", next);
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
