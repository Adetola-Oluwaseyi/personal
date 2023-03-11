#include <stdio.h>
#include <stdlib.h>

int coin_count(int);
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if number of arguments passed to program is not exactly one
 * 0 otherwise (successful)
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	count = coin_count(amount);
	printf("%d\n", count);
	return (0);
}

/**
 * coin_count - performs computation
 * @amount: amount of cents to give back
 *
 * Return: minimum number of coins to make change for an amount of money
 */
int coin_count(int amount)
{
	int count = 0;

	for (; amount > 0;)
	{
		if (amount >= 25)
		{
			count += 1;
			amount -= 25;
		}
		if (amount >= 10 && amount < 25)
		{
			count += 1;
			amount -= 10;
		}
		if (amount >= 5 && amount < 10)
		{
			count += 1;
			amount -= 5;
		}
		if (amount >= 2 && amount < 5)
		{
			count += 1;
			amount -= 2;
		}
		if (amount == 1)
		{
			count += 1;
			amount--;
		}
	}
	return (count);
}

