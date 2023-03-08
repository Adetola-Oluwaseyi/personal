#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, count, count2;

	j = 0;
	count = 0;
	count2 = 0;
	size -= 1;

	for (i = 0; i < size; i++)
	{
		count += a[i][j];
		count2 += a[i][size];
		size--;
		j++;
	}

	printf("%d, %d", count, count2);
}

