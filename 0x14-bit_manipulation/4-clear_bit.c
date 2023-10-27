#include "main.h"

/**
 * clear_bit - it will set value of a given bit to 0
 * @n: the pointer to number to changes
 *
 * @index: the index the bit to clear
 * Return: 1 for success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
