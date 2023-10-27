#include "main.h"

/**
 * get_bit -it will return value of bit at index in decimal numbers
 *
 * @n: the number to search
 * @index: its the index of the bit
 * Return: will return the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bite;

	if (index > 63)
		return (-1);

	bite = (n >> index) & 1;

	return (bite);
}
