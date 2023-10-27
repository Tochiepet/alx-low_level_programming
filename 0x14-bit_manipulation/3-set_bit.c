#include "main.h"

/**
 * set_bit - this will se bit at a given index to 1
 * @n: the pointer to number to change
 *
 * @index: its the index of the bit to set to 1
 * Return: will return 1 on success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
