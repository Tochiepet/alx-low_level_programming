#include "main.h"

/**
 * binary_to_uint -this will convert binary num to unsigned integer
 * @b: the string conts binary numbers
 * Return: it returns converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int deco = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		deco = 2 * deco + (b[k] - '0');
	}

	return (deco);
}

