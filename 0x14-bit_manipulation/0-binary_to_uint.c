#include "main.h"

/**
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
	for (i = 0; num; i++)
	{
		if (bina[num] != '0' || bina[num] != '1')
			return (0);
		in = bina[num] - 48;
		ans += in * weight(num);
		num--;
	}
	return (ans);
}

