#include "main.h"

/**
 * weight - helps calculate value of operand
 * used in converting from binary to decimal
 * @a: int argument
 *
 * Return: operand value
 */
unsigned int weight(unsigned int a)
{
	unsigned int i, ans;

	ans = 1;
	for (i = 0; i < a; i++)
		ans *= 2;
	return (ans);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary value
 *
 * Return: converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	char *bina = (char *)b;
	unsigned int i, num, in, ans;

	ans = 0;
	if (bina == NULL)
		return (0);
	for (i = 0; bina[i] != '\0'; i++)
	{
	}
	num = i;
	for (i = 0; bina[i]; i++)
	{
		num--;
		if (!(bina[i] == '0') && !(bina[i] == '1'))
			return (0);
		in = bina[i] - 48;
		ans += in * weight(num);
	}
	return (ans);
}

