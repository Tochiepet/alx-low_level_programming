#include "main.h"

/**
 * flip_bits - will count number of bits to changed
 * @n: the first numbers
 * @m: its the second numbers
 * Return: will return the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, mount = 0;
	unsigned long int rent;
	unsigned long int lusiv = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		rent = lusiv >> h;
		if (rent & 1)
			mount++;
	}

	return (mount);
}
