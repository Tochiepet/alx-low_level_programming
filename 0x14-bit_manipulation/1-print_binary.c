#include "main.h"

/**
 * print_binary -this will print binary equivalent of decimal numbers
 * @n: the number to print in binarys
 */
void print_binary(unsigned long int n)
{
	int l, mut = 0;
	unsigned long int lut;

	for (l = 63; l >= 0; l--)
	{
		lut = n >> l;

		if (lut & 1)
		{
			_putchar('1');
			mut++;
		}
		else if (mut)
			_putchar('0');
	}
	if (!mut)
		_putchar('0');
}
